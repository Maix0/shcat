/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_221.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1105(t_small_parse_table_array *v)
{
	v->a[22100] = sym_comment;
	v->a[22101] = actions(837);
	v->a[22102] = 1;
	v->a[22103] = aux_sym_concatenation_token1;
	v->a[22104] = actions(839);
	v->a[22105] = 1;
	v->a[22106] = sym__concat;
	v->a[22107] = actions(841);
	v->a[22108] = 1;
	v->a[22109] = sym__bare_dollar;
	v->a[22110] = state(284);
	v->a[22111] = 1;
	v->a[22112] = aux_sym_concatenation_repeat1;
	v->a[22113] = actions(833);
	v->a[22114] = 20;
	v->a[22115] = anon_sym_esac;
	v->a[22116] = anon_sym_PIPE;
	v->a[22117] = anon_sym_SEMI_SEMI;
	v->a[22118] = anon_sym_AMP_AMP;
	v->a[22119] = anon_sym_PIPE_PIPE;
	small_parse_table_1106(v);
}

void	small_parse_table_1106(t_small_parse_table_array *v)
{
	v->a[22120] = anon_sym_LT;
	v->a[22121] = anon_sym_GT;
	v->a[22122] = anon_sym_GT_GT;
	v->a[22123] = anon_sym_LT_LT;
	v->a[22124] = aux_sym_heredoc_redirect_token1;
	v->a[22125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22126] = anon_sym_DOLLAR;
	v->a[22127] = anon_sym_DQUOTE;
	v->a[22128] = sym_raw_string;
	v->a[22129] = sym_number;
	v->a[22130] = anon_sym_DOLLAR_LBRACE;
	v->a[22131] = anon_sym_DOLLAR_LPAREN;
	v->a[22132] = anon_sym_BQUOTE;
	v->a[22133] = sym_word;
	v->a[22134] = anon_sym_SEMI;
	v->a[22135] = 6;
	v->a[22136] = actions(3);
	v->a[22137] = 1;
	v->a[22138] = sym_comment;
	v->a[22139] = actions(841);
	small_parse_table_1107(v);
}

void	small_parse_table_1107(t_small_parse_table_array *v)
{
	v->a[22140] = 1;
	v->a[22141] = sym__bare_dollar;
	v->a[22142] = actions(857);
	v->a[22143] = 1;
	v->a[22144] = aux_sym_concatenation_token1;
	v->a[22145] = actions(859);
	v->a[22146] = 1;
	v->a[22147] = sym__concat;
	v->a[22148] = state(283);
	v->a[22149] = 1;
	v->a[22150] = aux_sym_concatenation_repeat1;
	v->a[22151] = actions(833);
	v->a[22152] = 20;
	v->a[22153] = anon_sym_PIPE;
	v->a[22154] = anon_sym_RPAREN;
	v->a[22155] = anon_sym_SEMI_SEMI;
	v->a[22156] = anon_sym_AMP_AMP;
	v->a[22157] = anon_sym_PIPE_PIPE;
	v->a[22158] = anon_sym_LT;
	v->a[22159] = anon_sym_GT;
	small_parse_table_1108(v);
}

void	small_parse_table_1108(t_small_parse_table_array *v)
{
	v->a[22160] = anon_sym_GT_GT;
	v->a[22161] = anon_sym_LT_LT;
	v->a[22162] = aux_sym_heredoc_redirect_token1;
	v->a[22163] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22164] = anon_sym_DOLLAR;
	v->a[22165] = anon_sym_DQUOTE;
	v->a[22166] = sym_raw_string;
	v->a[22167] = sym_number;
	v->a[22168] = anon_sym_DOLLAR_LBRACE;
	v->a[22169] = anon_sym_DOLLAR_LPAREN;
	v->a[22170] = anon_sym_BQUOTE;
	v->a[22171] = sym_word;
	v->a[22172] = anon_sym_SEMI;
	v->a[22173] = 13;
	v->a[22174] = actions(3);
	v->a[22175] = 1;
	v->a[22176] = sym_comment;
	v->a[22177] = actions(315);
	v->a[22178] = 1;
	v->a[22179] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1109(v);
}

void	small_parse_table_1109(t_small_parse_table_array *v)
{
	v->a[22180] = actions(317);
	v->a[22181] = 1;
	v->a[22182] = anon_sym_DOLLAR;
	v->a[22183] = actions(319);
	v->a[22184] = 1;
	v->a[22185] = anon_sym_DQUOTE;
	v->a[22186] = actions(323);
	v->a[22187] = 1;
	v->a[22188] = anon_sym_DOLLAR_LBRACE;
	v->a[22189] = actions(325);
	v->a[22190] = 1;
	v->a[22191] = anon_sym_DOLLAR_LPAREN;
	v->a[22192] = actions(327);
	v->a[22193] = 1;
	v->a[22194] = anon_sym_BQUOTE;
	v->a[22195] = actions(915);
	v->a[22196] = 1;
	v->a[22197] = sym__bare_dollar;
	v->a[22198] = state(263);
	v->a[22199] = 1;
	small_parse_table_1110(v);
}

/* EOF small_parse_table_221.c */
