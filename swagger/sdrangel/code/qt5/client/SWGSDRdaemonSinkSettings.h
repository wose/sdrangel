/**
 * SDRangel
 * This is the web REST/JSON API of SDRangel SDR software. SDRangel is an Open Source Qt5/OpenGL 3.0+ (4.3+ in Windows) GUI and server Software Defined Radio and signal analyzer in software. It supports Airspy, BladeRF, HackRF, LimeSDR, PlutoSDR, RTL-SDR, SDRplay RSP1 and FunCube     ---   Limitations and specifcities:       * In SDRangel GUI the first Rx device set cannot be deleted. Conversely the server starts with no device sets and its number of device sets can be reduced to zero by as many calls as necessary to /sdrangel/deviceset with DELETE method.   * Stopping instance i.e. /sdrangel with DELETE method is a server only feature. It allows stopping the instance nicely.   * Preset import and export from/to file is a server only feature.   * Device set focus is a GUI only feature.   * The following channels are not implemented (status 501 is returned): ATV demodulator, Channel Analyzer, Channel Analyzer NG, LoRa demodulator, TCP source   * The content type returned is always application/json except in the following cases:     * An incorrect URL was specified: this document is returned as text/html with a status 400    --- 
 *
 * OpenAPI spec version: 4.0.0
 * Contact: f4exb06@gmail.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * SWGSDRdaemonSinkSettings.h
 *
 * SDRdaemonSink
 */

#ifndef SWGSDRdaemonSinkSettings_H_
#define SWGSDRdaemonSinkSettings_H_

#include <QJsonObject>


#include <QString>

#include "SWGObject.h"
#include "export.h"

namespace SWGSDRangel {

class SWG_API SWGSDRdaemonSinkSettings: public SWGObject {
public:
    SWGSDRdaemonSinkSettings();
    SWGSDRdaemonSinkSettings(QString* json);
    virtual ~SWGSDRdaemonSinkSettings();
    void init();
    void cleanup();

    virtual QString asJson () override;
    virtual QJsonObject* asJsonObject() override;
    virtual void fromJsonObject(QJsonObject &json) override;
    virtual SWGSDRdaemonSinkSettings* fromJson(QString &jsonString) override;

    qint32 getCenterFrequency();
    void setCenterFrequency(qint32 center_frequency);

    qint32 getSampleRate();
    void setSampleRate(qint32 sample_rate);

    qint32 getLog2Interp();
    void setLog2Interp(qint32 log2_interp);

    float getTxDelay();
    void setTxDelay(float tx_delay);

    qint32 getNbFecBlocks();
    void setNbFecBlocks(qint32 nb_fec_blocks);

    QString* getAddress();
    void setAddress(QString* address);

    qint32 getDataPort();
    void setDataPort(qint32 data_port);

    qint32 getControlPort();
    void setControlPort(qint32 control_port);

    QString* getSpecificParameters();
    void setSpecificParameters(QString* specific_parameters);


    virtual bool isSet() override;

private:
    qint32 center_frequency;
    bool m_center_frequency_isSet;

    qint32 sample_rate;
    bool m_sample_rate_isSet;

    qint32 log2_interp;
    bool m_log2_interp_isSet;

    float tx_delay;
    bool m_tx_delay_isSet;

    qint32 nb_fec_blocks;
    bool m_nb_fec_blocks_isSet;

    QString* address;
    bool m_address_isSet;

    qint32 data_port;
    bool m_data_port_isSet;

    qint32 control_port;
    bool m_control_port_isSet;

    QString* specific_parameters;
    bool m_specific_parameters_isSet;

};

}

#endif /* SWGSDRdaemonSinkSettings_H_ */
