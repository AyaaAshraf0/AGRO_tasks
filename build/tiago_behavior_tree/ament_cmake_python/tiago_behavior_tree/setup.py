from setuptools import find_packages
from setuptools import setup

setup(
    name='tiago_behavior_tree',
    version='0.0.0',
    packages=find_packages(
        include=('tiago_behavior_tree', 'tiago_behavior_tree.*')),
)
