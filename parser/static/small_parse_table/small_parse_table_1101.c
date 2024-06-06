/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1101.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5505(t_small_parse_table_array *v)
{
	v->a[110100] = 2;
	v->a[110101] = sym_file_redirect;
	v->a[110102] = aux_sym_redirected_statement_repeat2;
	v->a[110103] = actions(5676);
	v->a[110104] = 8;
	v->a[110105] = anon_sym_LT;
	v->a[110106] = anon_sym_GT;
	v->a[110107] = anon_sym_GT_GT;
	v->a[110108] = anon_sym_AMP_GT;
	v->a[110109] = anon_sym_AMP_GT_GT;
	v->a[110110] = anon_sym_LT_AMP;
	v->a[110111] = anon_sym_GT_AMP;
	v->a[110112] = anon_sym_GT_PIPE;
	v->a[110113] = actions(5254);
	v->a[110114] = 10;
	v->a[110115] = anon_sym_PIPE;
	v->a[110116] = anon_sym_RPAREN;
	v->a[110117] = anon_sym_SEMI_SEMI;
	v->a[110118] = anon_sym_PIPE_AMP;
	v->a[110119] = anon_sym_AMP_AMP;
	small_parse_table_5506(v);
}

void	small_parse_table_5506(t_small_parse_table_array *v)
{
	v->a[110120] = anon_sym_PIPE_PIPE;
	v->a[110121] = anon_sym_LT_LT;
	v->a[110122] = anon_sym_LT_LT_DASH;
	v->a[110123] = anon_sym_AMP;
	v->a[110124] = anon_sym_SEMI;
	v->a[110125] = 3;
	v->a[110126] = actions(3);
	v->a[110127] = 1;
	v->a[110128] = sym_comment;
	v->a[110129] = actions(6143);
	v->a[110130] = 3;
	v->a[110131] = sym_file_descriptor;
	v->a[110132] = ts_builtin_sym_end;
	v->a[110133] = aux_sym_heredoc_redirect_token1;
	v->a[110134] = actions(6141);
	v->a[110135] = 21;
	v->a[110136] = anon_sym_PIPE;
	v->a[110137] = anon_sym_RPAREN;
	v->a[110138] = anon_sym_SEMI_SEMI;
	v->a[110139] = anon_sym_PIPE_AMP;
	small_parse_table_5507(v);
}

void	small_parse_table_5507(t_small_parse_table_array *v)
{
	v->a[110140] = anon_sym_AMP_AMP;
	v->a[110141] = anon_sym_PIPE_PIPE;
	v->a[110142] = anon_sym_LT;
	v->a[110143] = anon_sym_GT;
	v->a[110144] = anon_sym_GT_GT;
	v->a[110145] = anon_sym_AMP_GT;
	v->a[110146] = anon_sym_AMP_GT_GT;
	v->a[110147] = anon_sym_LT_AMP;
	v->a[110148] = anon_sym_GT_AMP;
	v->a[110149] = anon_sym_GT_PIPE;
	v->a[110150] = anon_sym_LT_AMP_DASH;
	v->a[110151] = anon_sym_GT_AMP_DASH;
	v->a[110152] = anon_sym_LT_LT;
	v->a[110153] = anon_sym_LT_LT_DASH;
	v->a[110154] = anon_sym_AMP;
	v->a[110155] = anon_sym_BQUOTE;
	v->a[110156] = anon_sym_SEMI;
	v->a[110157] = 16;
	v->a[110158] = actions(3);
	v->a[110159] = 1;
	small_parse_table_5508(v);
}

void	small_parse_table_5508(t_small_parse_table_array *v)
{
	v->a[110160] = sym_comment;
	v->a[110161] = actions(2541);
	v->a[110162] = 1;
	v->a[110163] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[110164] = actions(2543);
	v->a[110165] = 1;
	v->a[110166] = anon_sym_DOLLAR;
	v->a[110167] = actions(2547);
	v->a[110168] = 1;
	v->a[110169] = anon_sym_DQUOTE;
	v->a[110170] = actions(2551);
	v->a[110171] = 1;
	v->a[110172] = aux_sym_number_token1;
	v->a[110173] = actions(2553);
	v->a[110174] = 1;
	v->a[110175] = aux_sym_number_token2;
	v->a[110176] = actions(2555);
	v->a[110177] = 1;
	v->a[110178] = anon_sym_DOLLAR_LBRACE;
	v->a[110179] = actions(2557);
	small_parse_table_5509(v);
}

void	small_parse_table_5509(t_small_parse_table_array *v)
{
	v->a[110180] = 1;
	v->a[110181] = anon_sym_DOLLAR_LPAREN;
	v->a[110182] = actions(2559);
	v->a[110183] = 1;
	v->a[110184] = anon_sym_BQUOTE;
	v->a[110185] = actions(2561);
	v->a[110186] = 1;
	v->a[110187] = anon_sym_DOLLAR_BQUOTE;
	v->a[110188] = actions(2567);
	v->a[110189] = 1;
	v->a[110190] = sym__brace_start;
	v->a[110191] = actions(6282);
	v->a[110192] = 1;
	v->a[110193] = sym_word;
	v->a[110194] = actions(6284);
	v->a[110195] = 1;
	v->a[110196] = sym__special_character;
	v->a[110197] = actions(6288);
	v->a[110198] = 1;
	v->a[110199] = sym__comment_word;
	small_parse_table_5510(v);
}

/* EOF small_parse_table_1101.c */
