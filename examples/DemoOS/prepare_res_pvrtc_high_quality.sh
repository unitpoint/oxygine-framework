#!/bin/bash
python ../../tools/process_xml2.py -x xmls/res.xml --src_data data --dest_data data/ext --compress pvrtc -q best
python ../../tools/process_xml2.py -x demo/res_ui.xml --src_data data --dest_data data/ext --compress pvrtc -q best
