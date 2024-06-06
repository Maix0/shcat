/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_231.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1155(t_small_parse_table_array *v)
{
	v->a[23100] = actions(3121);
	v->a[23101] = 5;
	v->a[23102] = sym_file_descriptor;
	v->a[23103] = sym_variable_name;
	v->a[23104] = sym_test_operator;
	v->a[23105] = sym__brace_start;
	v->a[23106] = aux_sym_heredoc_redirect_token1;
	v->a[23107] = actions(3119);
	v->a[23108] = 34;
	v->a[23109] = anon_sym_esac;
	v->a[23110] = anon_sym_PIPE;
	v->a[23111] = anon_sym_SEMI_SEMI;
	v->a[23112] = anon_sym_SEMI_AMP;
	v->a[23113] = anon_sym_SEMI_SEMI_AMP;
	v->a[23114] = anon_sym_PIPE_AMP;
	v->a[23115] = anon_sym_AMP_AMP;
	v->a[23116] = anon_sym_PIPE_PIPE;
	v->a[23117] = anon_sym_LT;
	v->a[23118] = anon_sym_GT;
	v->a[23119] = anon_sym_GT_GT;
	small_parse_table_1156(v);
}

void	small_parse_table_1156(t_small_parse_table_array *v)
{
	v->a[23120] = anon_sym_AMP_GT;
	v->a[23121] = anon_sym_AMP_GT_GT;
	v->a[23122] = anon_sym_LT_AMP;
	v->a[23123] = anon_sym_GT_AMP;
	v->a[23124] = anon_sym_GT_PIPE;
	v->a[23125] = anon_sym_LT_AMP_DASH;
	v->a[23126] = anon_sym_GT_AMP_DASH;
	v->a[23127] = anon_sym_LT_LT;
	v->a[23128] = anon_sym_LT_LT_DASH;
	v->a[23129] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23130] = anon_sym_AMP;
	v->a[23131] = anon_sym_DOLLAR;
	v->a[23132] = sym__special_character;
	v->a[23133] = anon_sym_DQUOTE;
	v->a[23134] = sym_raw_string;
	v->a[23135] = aux_sym_number_token1;
	v->a[23136] = aux_sym_number_token2;
	v->a[23137] = anon_sym_DOLLAR_LBRACE;
	v->a[23138] = anon_sym_DOLLAR_LPAREN;
	v->a[23139] = anon_sym_BQUOTE;
	small_parse_table_1157(v);
}

void	small_parse_table_1157(t_small_parse_table_array *v)
{
	v->a[23140] = anon_sym_DOLLAR_BQUOTE;
	v->a[23141] = sym_word;
	v->a[23142] = anon_sym_SEMI;
	v->a[23143] = 3;
	v->a[23144] = actions(3);
	v->a[23145] = 1;
	v->a[23146] = sym_comment;
	v->a[23147] = actions(3066);
	v->a[23148] = 6;
	v->a[23149] = sym_file_descriptor;
	v->a[23150] = sym__concat;
	v->a[23151] = sym_variable_name;
	v->a[23152] = sym_test_operator;
	v->a[23153] = sym__brace_start;
	v->a[23154] = aux_sym_heredoc_redirect_token1;
	v->a[23155] = actions(3064);
	v->a[23156] = 36;
	v->a[23157] = anon_sym_esac;
	v->a[23158] = anon_sym_PIPE;
	v->a[23159] = anon_sym_SEMI_SEMI;
	small_parse_table_1158(v);
}

void	small_parse_table_1158(t_small_parse_table_array *v)
{
	v->a[23160] = anon_sym_SEMI_AMP;
	v->a[23161] = anon_sym_SEMI_SEMI_AMP;
	v->a[23162] = anon_sym_PIPE_AMP;
	v->a[23163] = anon_sym_AMP_AMP;
	v->a[23164] = anon_sym_PIPE_PIPE;
	v->a[23165] = anon_sym_LT;
	v->a[23166] = anon_sym_GT;
	v->a[23167] = anon_sym_GT_GT;
	v->a[23168] = anon_sym_AMP_GT;
	v->a[23169] = anon_sym_AMP_GT_GT;
	v->a[23170] = anon_sym_LT_AMP;
	v->a[23171] = anon_sym_GT_AMP;
	v->a[23172] = anon_sym_GT_PIPE;
	v->a[23173] = anon_sym_LT_AMP_DASH;
	v->a[23174] = anon_sym_GT_AMP_DASH;
	v->a[23175] = anon_sym_LT_LT;
	v->a[23176] = anon_sym_LT_LT_DASH;
	v->a[23177] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23178] = anon_sym_AMP;
	v->a[23179] = aux_sym_concatenation_token1;
	small_parse_table_1159(v);
}

void	small_parse_table_1159(t_small_parse_table_array *v)
{
	v->a[23180] = anon_sym_DOLLAR;
	v->a[23181] = sym__special_character;
	v->a[23182] = anon_sym_DQUOTE;
	v->a[23183] = sym_raw_string;
	v->a[23184] = aux_sym_number_token1;
	v->a[23185] = aux_sym_number_token2;
	v->a[23186] = anon_sym_DOLLAR_LBRACE;
	v->a[23187] = anon_sym_DOLLAR_LPAREN;
	v->a[23188] = anon_sym_BQUOTE;
	v->a[23189] = anon_sym_DOLLAR_BQUOTE;
	v->a[23190] = aux_sym__simple_variable_name_token1;
	v->a[23191] = sym_word;
	v->a[23192] = anon_sym_SEMI;
	v->a[23193] = 3;
	v->a[23194] = actions(3);
	v->a[23195] = 1;
	v->a[23196] = sym_comment;
	v->a[23197] = actions(3125);
	v->a[23198] = 6;
	v->a[23199] = sym_file_descriptor;
	small_parse_table_1160(v);
}

/* EOF small_parse_table_231.c */
