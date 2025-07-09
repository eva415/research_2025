from setuptools import find_packages
from setuptools import setup

setup(
    name='harvest_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('harvest_interfaces', 'harvest_interfaces.*')),
)
