import numpy as np
import matplotlib.pyplot as plt

# Data
data = {
    'hella_occlusion': {
        'flex': {
            'center': [0.06, 0.06, 0.06, 0.06],
            'down2cm': [0.06, 0.06, 0.06, 0.06],
            'left2cm': [0.13, 0.06, 0.06, 0.06],
            'right2cm': [0.07, 0.07, 0.07, 0.07],
            'up2cm': [0.03, 0.03, 0.03, 0.03]
        },
        'tof': {
            'center': 0.06,
            'down2cm': 0.06,
            'left2cm': 0.06,
            'right2cm': 0.07,
            'up2cm': 0.03
        }
    },
    'no_occlusion': {
        'flex': {
            'center': [0.08]*4,
            'down2cm': [0.06]*4,
            'left2cm': [0.07]*4,
            'right2cm': [0.04]*4,
            'up2cm': [0.14, 0.07, 0.07, 0.07]
        },
        'tof': {
            'center': 0.08,
            'down2cm': 0.06,
            'left2cm': 0.07,
            'right2cm': 0.04,
            'up2cm': 0.07
        }
    },
    'left_occlusion': {
        'flex': {
            'center': [0.17, 0.17, 0.17, 0.09],
            'down2cm': [0.06]*4,
            'left2cm': [0.07]*4,
            'right2cm': [0.07]*4,
            'up2cm': [0.06]*4
        },
        'tof': {
            'center': 0.09,
            'down2cm': 0.06,
            'left2cm': 0.07,
            'right2cm': 0.07,
            'up2cm': 0.06
        }
    },
    'right_occlusion': {
        'flex': {
            'center': [0.06]*4,
            'down2cm': [0.03]*4,
            'left2cm': [0.05]*4,
            'right2cm': [0.05]*4,
            'up2cm': [0.06]*4
        },
        'tof': {
            'center': 0.06,
            'down2cm': 0.03,
            'left2cm': 0.05,
            'right2cm': 0.05,
            'up2cm': 0.06
        }
    },
    'just_occlusion': {
        'flex': {
            'center': [0.08]*4,
            'down2cm': [0.06]*4,
            'left2cm': [0.08]*4,
            'right2cm': [0.07]*4,
            'up2cm': [0.08]*4
        },
        'tof': {
            'center': 0.08,
            'down2cm': 0.06,
            'left2cm': 0.08,
            'right2cm': 0.07,
            'up2cm': 0.08
        }
    }
}

# Plot
positions = ['center', 'down2cm', 'left2cm', 'right2cm', 'up2cm']
x_map = {pos: i for i, pos in enumerate(positions)}

colors = {
    'hella_occlusion': 'tab:blue',
    'no_occlusion': 'tab:green',
    'left_occlusion': 'tab:red',
    'right_occlusion': 'tab:orange',
    'just_occlusion': 'tab:purple'
}

plt.figure(figsize=(10,6))

for group, group_data in data.items():
    color = colors[group]

    # collect Flex means for line
    flex_x = []
    flex_y = []

    # collect ToF values for line
    tof_x = []
    tof_y = []

    for pos in positions:
        # Flex channels -> plot mean with error bar
        y_vals = np.array(group_data['flex'][pos])
        mean = np.mean(y_vals)
        std = np.std(y_vals)

        x = x_map[pos]
        plt.errorbar(x, mean, yerr=std, fmt='o', color=color, alpha=0.6,
                     label=f"{group} Flex" if pos=='center' else "", capsize=4)

        flex_x.append(x)
        flex_y.append(mean)
        
        # ToF sensor (single value)
        tof_val = group_data['tof'][pos]
        plt.scatter(x, tof_val, color=color, edgecolors='k', alpha=0.8,
                    label=f"{group} ToF" if pos=='center' else "", marker='o', s=80)

        tof_x.append(x)
        tof_y.append(tof_val)

    # connect Flex means
    plt.plot(flex_x, flex_y, color=color, alpha=0.4, linestyle='-')

    # connect ToF values
    plt.plot(tof_x, tof_y, color=color, alpha=0.8, linestyle='--')

plt.xticks(list(x_map.values()), positions)
plt.ylabel('Frequency (Hz)')
plt.xlabel('File Position')
plt.title('Dominant Frequencies by Occlusion Group')
plt.grid(True, linestyle='--', alpha=0.4)
plt.legend()
plt.tight_layout()
plt.show()