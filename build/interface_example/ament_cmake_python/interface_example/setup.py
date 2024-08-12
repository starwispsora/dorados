from setuptools import find_packages
from setuptools import setup

setup(
    name='interface_example',
    version='0.0.0',
    packages=find_packages(
        include=('interface_example', 'interface_example.*')),
)
