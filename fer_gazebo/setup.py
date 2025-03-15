from setuptools import find_packages, setup

import os  
from glob import glob


package_name = 'fer_gazebo'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*.launch.py'))),
      
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='ayaa',
    maintainer_email='ayaaashraffarag.200166@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
          'pick_place = fer_gazebo.pick_place:main',
        
        ],
    },
)
