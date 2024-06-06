/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_161.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_805(t_small_parse_table_array *v)
{
	v->a[16100] = 10;
	v->a[16101] = sym_file_descriptor;
	v->a[16102] = anon_sym_PIPE_AMP;
	v->a[16103] = anon_sym_AMP_AMP;
	v->a[16104] = anon_sym_PIPE_PIPE;
	v->a[16105] = anon_sym_GT_GT;
	v->a[16106] = anon_sym_AMP_GT_GT;
	v->a[16107] = anon_sym_GT_PIPE;
	v->a[16108] = anon_sym_LT_AMP_DASH;
	v->a[16109] = anon_sym_GT_AMP_DASH;
	v->a[16110] = anon_sym_LT_LT_DASH;
	v->a[16111] = 12;
	v->a[16112] = actions(3);
	v->a[16113] = 1;
	v->a[16114] = sym_comment;
	v->a[16115] = actions(2528);
	v->a[16116] = 1;
	v->a[16117] = sym_variable_name;
	v->a[16118] = actions(2642);
	v->a[16119] = 1;
	small_parse_table_806(v);
}

void	small_parse_table_806(t_small_parse_table_array *v)
{
	v->a[16120] = aux_sym_heredoc_redirect_token1;
	v->a[16121] = actions(2516);
	v->a[16122] = 2;
	v->a[16123] = anon_sym_PIPE;
	v->a[16124] = anon_sym_PIPE_AMP;
	v->a[16125] = actions(2518);
	v->a[16126] = 2;
	v->a[16127] = anon_sym_AMP_AMP;
	v->a[16128] = anon_sym_PIPE_PIPE;
	v->a[16129] = actions(2520);
	v->a[16130] = 2;
	v->a[16131] = anon_sym_LT_LT;
	v->a[16132] = anon_sym_LT_LT_DASH;
	v->a[16133] = actions(2644);
	v->a[16134] = 2;
	v->a[16135] = anon_sym_AMP;
	v->a[16136] = anon_sym_SEMI;
	v->a[16137] = state(1886);
	v->a[16138] = 2;
	v->a[16139] = sym_variable_assignment;
	small_parse_table_807(v);
}

void	small_parse_table_807(t_small_parse_table_array *v)
{
	v->a[16140] = aux_sym_variable_assignments_repeat1;
	v->a[16141] = actions(2526);
	v->a[16142] = 3;
	v->a[16143] = sym_file_descriptor;
	v->a[16144] = sym_test_operator;
	v->a[16145] = sym__brace_start;
	v->a[16146] = state(1894);
	v->a[16147] = 3;
	v->a[16148] = sym_file_redirect;
	v->a[16149] = sym_heredoc_redirect;
	v->a[16150] = aux_sym_redirected_statement_repeat1;
	v->a[16151] = actions(1995);
	v->a[16152] = 4;
	v->a[16153] = anon_sym_esac;
	v->a[16154] = anon_sym_SEMI_SEMI;
	v->a[16155] = anon_sym_SEMI_AMP;
	v->a[16156] = anon_sym_SEMI_SEMI_AMP;
	v->a[16157] = actions(2512);
	v->a[16158] = 22;
	v->a[16159] = anon_sym_LT;
	small_parse_table_808(v);
}

void	small_parse_table_808(t_small_parse_table_array *v)
{
	v->a[16160] = anon_sym_GT;
	v->a[16161] = anon_sym_GT_GT;
	v->a[16162] = anon_sym_AMP_GT;
	v->a[16163] = anon_sym_AMP_GT_GT;
	v->a[16164] = anon_sym_LT_AMP;
	v->a[16165] = anon_sym_GT_AMP;
	v->a[16166] = anon_sym_GT_PIPE;
	v->a[16167] = anon_sym_LT_AMP_DASH;
	v->a[16168] = anon_sym_GT_AMP_DASH;
	v->a[16169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16170] = anon_sym_DOLLAR;
	v->a[16171] = sym__special_character;
	v->a[16172] = anon_sym_DQUOTE;
	v->a[16173] = sym_raw_string;
	v->a[16174] = aux_sym_number_token1;
	v->a[16175] = aux_sym_number_token2;
	v->a[16176] = anon_sym_DOLLAR_LBRACE;
	v->a[16177] = anon_sym_DOLLAR_LPAREN;
	v->a[16178] = anon_sym_BQUOTE;
	v->a[16179] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_809(v);
}

void	small_parse_table_809(t_small_parse_table_array *v)
{
	v->a[16180] = sym_word;
	v->a[16181] = 27;
	v->a[16182] = actions(3);
	v->a[16183] = 1;
	v->a[16184] = sym_comment;
	v->a[16185] = actions(2458);
	v->a[16186] = 1;
	v->a[16187] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16188] = actions(2460);
	v->a[16189] = 1;
	v->a[16190] = anon_sym_DOLLAR;
	v->a[16191] = actions(2462);
	v->a[16192] = 1;
	v->a[16193] = sym__special_character;
	v->a[16194] = actions(2464);
	v->a[16195] = 1;
	v->a[16196] = anon_sym_DQUOTE;
	v->a[16197] = actions(2466);
	v->a[16198] = 1;
	v->a[16199] = aux_sym_number_token1;
	small_parse_table_810(v);
}

/* EOF small_parse_table_161.c */
