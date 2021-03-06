#ifndef __gc0308_CAMERA_H__
#define __gc0308_CAMERA_H__

struct cam_sensor_plat_data {
	int facing;
	int orientation;
	int mirror;   //camera mirror
	//u16	gpio_vcc;	/* vcc enable gpio */   remove the gpio_vcc   , DO NOT use this pin for sensor power up ,cim will controls this
	uint16_t	gpio_rst;	/* resert  gpio */
	uint16_t	gpio_en;	/* camera enable gpio */
	int cap_wait_frame;    /* filter n frames when capture image */
};

struct gc0308_sensor {

	struct cim_sensor cs;
	struct i2c_client *client;
	//struct gc0308_platform_data *pdata;
	uint16_t	gpio_rst;	/* resert  gpio */
	uint16_t	gpio_en;	/* camera enable gpio */
	int mirror;   //camera mirror

	char name[8];

	unsigned int width;
	unsigned int height;
};



int gc0308_write_reg(struct i2c_client *client,unsigned char reg, unsigned char val);
unsigned char gc0308_read_reg(struct i2c_client *client,unsigned char reg);

#endif

