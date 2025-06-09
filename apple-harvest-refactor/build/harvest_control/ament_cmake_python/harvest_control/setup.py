from setuptools import find_packages
from setuptools import setup

setup(
    name='harvest_control',
    version='0.0.0',
    packages=find_packages(
        include=('harvest_control', 'harvest_control.*')),
)
