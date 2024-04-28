/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1901.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9505(t_small_parse_table_array *v)
{
	v->a[190100] = sym_raw_string;
	v->a[190101] = sym_ansi_c_string;
	v->a[190102] = anon_sym_DOLLAR_LBRACE;
	v->a[190103] = anon_sym_DOLLAR_BQUOTE;
	v->a[190104] = anon_sym_LT_LPAREN;
	v->a[190105] = anon_sym_GT_LPAREN;
	v->a[190106] = 3;
	v->a[190107] = actions(3);
	v->a[190108] = 1;
	v->a[190109] = sym_comment;
	v->a[190110] = actions(1263);
	v->a[190111] = 4;
	v->a[190112] = sym_file_descriptor;
	v->a[190113] = sym_test_operator;
	v->a[190114] = sym__brace_start;
	v->a[190115] = aux_sym_heredoc_redirect_token1;
	v->a[190116] = actions(1261);
	v->a[190117] = 30;
	v->a[190118] = anon_sym_LPAREN_LPAREN;
	v->a[190119] = anon_sym_PIPE_PIPE;
	small_parse_table_9506(v);
}

void	small_parse_table_9506(t_small_parse_table_array *v)
{
	v->a[190120] = anon_sym_AMP_AMP;
	v->a[190121] = anon_sym_LT;
	v->a[190122] = anon_sym_GT;
	v->a[190123] = anon_sym_GT_GT;
	v->a[190124] = anon_sym_AMP_GT;
	v->a[190125] = anon_sym_AMP_GT_GT;
	v->a[190126] = anon_sym_LT_AMP;
	v->a[190127] = anon_sym_GT_AMP;
	v->a[190128] = anon_sym_GT_PIPE;
	v->a[190129] = anon_sym_LT_AMP_DASH;
	v->a[190130] = anon_sym_GT_AMP_DASH;
	v->a[190131] = anon_sym_LT_LT_LT;
	v->a[190132] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190133] = anon_sym_DOLLAR_LBRACK;
	v->a[190134] = anon_sym_DOLLAR;
	v->a[190135] = sym__special_character;
	v->a[190136] = anon_sym_DQUOTE;
	v->a[190137] = sym_raw_string;
	v->a[190138] = sym_ansi_c_string;
	v->a[190139] = aux_sym_number_token1;
	small_parse_table_9507(v);
}

void	small_parse_table_9507(t_small_parse_table_array *v)
{
	v->a[190140] = aux_sym_number_token2;
	v->a[190141] = anon_sym_DOLLAR_LBRACE;
	v->a[190142] = anon_sym_DOLLAR_LPAREN;
	v->a[190143] = anon_sym_BQUOTE;
	v->a[190144] = anon_sym_DOLLAR_BQUOTE;
	v->a[190145] = anon_sym_LT_LPAREN;
	v->a[190146] = anon_sym_GT_LPAREN;
	v->a[190147] = sym_word;
	v->a[190148] = 3;
	v->a[190149] = actions(71);
	v->a[190150] = 1;
	v->a[190151] = sym_comment;
	v->a[190152] = actions(1296);
	v->a[190153] = 11;
	v->a[190154] = anon_sym_LT;
	v->a[190155] = anon_sym_GT;
	v->a[190156] = anon_sym_AMP_GT;
	v->a[190157] = anon_sym_LT_AMP;
	v->a[190158] = anon_sym_GT_AMP;
	v->a[190159] = anon_sym_DOLLAR;
	small_parse_table_9508(v);
}

void	small_parse_table_9508(t_small_parse_table_array *v)
{
	v->a[190160] = aux_sym_number_token1;
	v->a[190161] = aux_sym_number_token2;
	v->a[190162] = anon_sym_DOLLAR_LPAREN;
	v->a[190163] = anon_sym_BQUOTE;
	v->a[190164] = sym_word;
	v->a[190165] = actions(1298);
	v->a[190166] = 23;
	v->a[190167] = sym_file_descriptor;
	v->a[190168] = sym__concat;
	v->a[190169] = sym_variable_name;
	v->a[190170] = sym_test_operator;
	v->a[190171] = sym__brace_start;
	v->a[190172] = anon_sym_LPAREN_LPAREN;
	v->a[190173] = anon_sym_GT_GT;
	v->a[190174] = anon_sym_AMP_GT_GT;
	v->a[190175] = anon_sym_GT_PIPE;
	v->a[190176] = anon_sym_LT_AMP_DASH;
	v->a[190177] = anon_sym_GT_AMP_DASH;
	v->a[190178] = anon_sym_LT_LT_LT;
	v->a[190179] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_9509(v);
}

void	small_parse_table_9509(t_small_parse_table_array *v)
{
	v->a[190180] = anon_sym_DOLLAR_LBRACK;
	v->a[190181] = aux_sym_concatenation_token1;
	v->a[190182] = sym__special_character;
	v->a[190183] = anon_sym_DQUOTE;
	v->a[190184] = sym_raw_string;
	v->a[190185] = sym_ansi_c_string;
	v->a[190186] = anon_sym_DOLLAR_LBRACE;
	v->a[190187] = anon_sym_DOLLAR_BQUOTE;
	v->a[190188] = anon_sym_LT_LPAREN;
	v->a[190189] = anon_sym_GT_LPAREN;
	v->a[190190] = 3;
	v->a[190191] = actions(71);
	v->a[190192] = 1;
	v->a[190193] = sym_comment;
	v->a[190194] = actions(1292);
	v->a[190195] = 11;
	v->a[190196] = anon_sym_LT;
	v->a[190197] = anon_sym_GT;
	v->a[190198] = anon_sym_AMP_GT;
	v->a[190199] = anon_sym_LT_AMP;
	small_parse_table_9510(v);
}

/* EOF small_parse_table_1901.c */
