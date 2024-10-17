from setuptools import find_packages
from setuptools import setup

setup(
    name='astra_camera_msgs',
    version='1.0.1',
    packages=find_packages(
        include=('astra_camera_msgs', 'astra_camera_msgs.*')),
)
