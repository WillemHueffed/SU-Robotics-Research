from setuptools import setup

package_name = "rgbd_camera"

setup(
    name=package_name,
    version="0.0.0",
    packages=[package_name],
    data_files=[
        ("share/ament_index/resource_index/packages", ["resource/" + package_name]),
        ("share/" + package_name, ["package.xml"]),
    ],
    install_requires=["setuptools"],
    zip_safe=True,
    maintainer="locobot",
    maintainer_email="willmhueffed@gmail.com",
    description="TODO: Package description",
    license="TODO: License declaration",
    tests_require=["pytest"],
    entry_points={
        "console_scripts": [
            "camera_coord_node = rgbd_camera.camera_coord_node:main",
            "coord_translator_node = rgbd_camera.coord_translator_node:main",
            "eye_gaze_node = rgbd_camera.eye_gaze_node:main",
        ],
    },
)
