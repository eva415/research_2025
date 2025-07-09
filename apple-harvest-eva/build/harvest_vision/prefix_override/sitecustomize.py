import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/imml/git/research_2025/apple-harvest-eva/install/harvest_vision'
