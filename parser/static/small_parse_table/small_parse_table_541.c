/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_541.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2705(t_small_parse_table_array *v)
{
	v->a[54100] = actions(790);
	v->a[54101] = 2;
	v->a[54102] = anon_sym_LT_LT;
	v->a[54103] = anon_sym_LT_LT_DASH;
	v->a[54104] = actions(1059);
	v->a[54105] = 2;
	v->a[54106] = anon_sym_AMP_AMP;
	v->a[54107] = anon_sym_PIPE_PIPE;
	v->a[54108] = state(1062);
	v->a[54109] = 3;
	v->a[54110] = sym_file_redirect;
	v->a[54111] = sym_heredoc_redirect;
	v->a[54112] = aux_sym_redirected_statement_repeat1;
	v->a[54113] = actions(1886);
	v->a[54114] = 7;
	v->a[54115] = anon_sym_LT;
	v->a[54116] = anon_sym_GT;
	v->a[54117] = anon_sym_GT_GT;
	v->a[54118] = anon_sym_LT_AMP;
	v->a[54119] = anon_sym_GT_AMP;
	small_parse_table_2706(v);
}

void	small_parse_table_2706(t_small_parse_table_array *v)
{
	v->a[54120] = anon_sym_GT_PIPE;
	v->a[54121] = anon_sym_LT_GT;
	v->a[54122] = 11;
	v->a[54123] = actions(3);
	v->a[54124] = 1;
	v->a[54125] = sym_comment;
	v->a[54126] = actions(782);
	v->a[54127] = 1;
	v->a[54128] = anon_sym_PIPE;
	v->a[54129] = actions(784);
	v->a[54130] = 1;
	v->a[54131] = anon_sym_BQUOTE;
	v->a[54132] = actions(1888);
	v->a[54133] = 1;
	v->a[54134] = aux_sym_heredoc_redirect_token1;
	v->a[54135] = actions(1890);
	v->a[54136] = 1;
	v->a[54137] = sym_file_descriptor;
	v->a[54138] = state(826);
	v->a[54139] = 1;
	small_parse_table_2707(v);
}

void	small_parse_table_2707(t_small_parse_table_array *v)
{
	v->a[54140] = sym_terminator;
	v->a[54141] = actions(786);
	v->a[54142] = 2;
	v->a[54143] = anon_sym_SEMI_SEMI;
	v->a[54144] = anon_sym_SEMI;
	v->a[54145] = actions(790);
	v->a[54146] = 2;
	v->a[54147] = anon_sym_LT_LT;
	v->a[54148] = anon_sym_LT_LT_DASH;
	v->a[54149] = actions(1059);
	v->a[54150] = 2;
	v->a[54151] = anon_sym_AMP_AMP;
	v->a[54152] = anon_sym_PIPE_PIPE;
	v->a[54153] = state(1062);
	v->a[54154] = 3;
	v->a[54155] = sym_file_redirect;
	v->a[54156] = sym_heredoc_redirect;
	v->a[54157] = aux_sym_redirected_statement_repeat1;
	v->a[54158] = actions(1886);
	v->a[54159] = 7;
	small_parse_table_2708(v);
}

void	small_parse_table_2708(t_small_parse_table_array *v)
{
	v->a[54160] = anon_sym_LT;
	v->a[54161] = anon_sym_GT;
	v->a[54162] = anon_sym_GT_GT;
	v->a[54163] = anon_sym_LT_AMP;
	v->a[54164] = anon_sym_GT_AMP;
	v->a[54165] = anon_sym_GT_PIPE;
	v->a[54166] = anon_sym_LT_GT;
	v->a[54167] = 6;
	v->a[54168] = actions(3);
	v->a[54169] = 1;
	v->a[54170] = sym_comment;
	v->a[54171] = actions(1892);
	v->a[54172] = 1;
	v->a[54173] = aux_sym_concatenation_token1;
	v->a[54174] = actions(1894);
	v->a[54175] = 1;
	v->a[54176] = sym__concat;
	v->a[54177] = state(963);
	v->a[54178] = 1;
	v->a[54179] = aux_sym_concatenation_repeat1;
	small_parse_table_2709(v);
}

void	small_parse_table_2709(t_small_parse_table_array *v)
{
	v->a[54180] = actions(1097);
	v->a[54181] = 2;
	v->a[54182] = sym_file_descriptor;
	v->a[54183] = sym_variable_name;
	v->a[54184] = actions(1099);
	v->a[54185] = 16;
	v->a[54186] = anon_sym_LT;
	v->a[54187] = anon_sym_GT;
	v->a[54188] = anon_sym_GT_GT;
	v->a[54189] = anon_sym_LT_AMP;
	v->a[54190] = anon_sym_GT_AMP;
	v->a[54191] = anon_sym_GT_PIPE;
	v->a[54192] = anon_sym_LT_GT;
	v->a[54193] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[54194] = anon_sym_DOLLAR;
	v->a[54195] = anon_sym_DQUOTE;
	v->a[54196] = sym_raw_string;
	v->a[54197] = sym_number;
	v->a[54198] = anon_sym_DOLLAR_LBRACE;
	v->a[54199] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2710(v);
}

/* EOF small_parse_table_541.c */
