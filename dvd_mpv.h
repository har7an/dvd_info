#ifndef DVD_INFO_MPV_H
#define DVD_INFO_MPV_H

struct dvd_trip {
	uint16_t track;
	uint8_t first_chapter;
	uint8_t last_chapter;
	char filename[PATH_MAX];
	char config_dir[PATH_MAX];
	char mpv_config_dir[PATH_MAX];
	char container[5];
	bool encode_video;
	char vcodec[256];
	char vcodec_opts[256];
	char vcodec_log_level[6];
	char color_opts[256];
	bool encode_audio;
	char audio_lang[3];
	char audio_stream_id[4];
	char acodec[256];
	char acodec_opts[256];
	bool encode_subtitles;
	char subtitles_lang[3];
	char subtitles_stream_id[4];
	char vf_opts[256];
	uint8_t crf;
	char fps[11];
	bool deinterlace;
};

#endif