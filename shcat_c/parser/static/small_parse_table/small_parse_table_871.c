/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_871.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4355(t_small_parse_table_array *v)
{
	v->a[87100] = anon_sym_PIPE;
	v->a[87101] = anon_sym_AMP;
	v->a[87102] = anon_sym_LT;
	v->a[87103] = anon_sym_GT;
	v->a[87104] = anon_sym_LT_LT;
	v->a[87105] = anon_sym_GT_GT;
	v->a[87106] = anon_sym_RPAREN;
	v->a[87107] = anon_sym_SEMI_SEMI;
	v->a[87108] = anon_sym_PIPE_AMP;
	v->a[87109] = anon_sym_AMP_GT;
	v->a[87110] = anon_sym_AMP_GT_GT;
	v->a[87111] = anon_sym_LT_AMP;
	v->a[87112] = anon_sym_GT_AMP;
	v->a[87113] = anon_sym_GT_PIPE;
	v->a[87114] = anon_sym_LT_AMP_DASH;
	v->a[87115] = anon_sym_GT_AMP_DASH;
	v->a[87116] = anon_sym_LT_LT_DASH;
	v->a[87117] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87118] = anon_sym_DOLLAR_LBRACK;
	v->a[87119] = aux_sym_concatenation_token1;
	small_parse_table_4356(v);
}

void	small_parse_table_4356(t_small_parse_table_array *v)
{
	v->a[87120] = anon_sym_DOLLAR;
	v->a[87121] = sym__special_character;
	v->a[87122] = anon_sym_DQUOTE;
	v->a[87123] = sym_raw_string;
	v->a[87124] = sym_ansi_c_string;
	v->a[87125] = aux_sym_number_token1;
	v->a[87126] = aux_sym_number_token2;
	v->a[87127] = anon_sym_DOLLAR_LBRACE;
	v->a[87128] = anon_sym_DOLLAR_LPAREN;
	v->a[87129] = anon_sym_BQUOTE;
	v->a[87130] = anon_sym_DOLLAR_BQUOTE;
	v->a[87131] = anon_sym_LT_LPAREN;
	v->a[87132] = anon_sym_GT_LPAREN;
	v->a[87133] = aux_sym__simple_variable_name_token1;
	v->a[87134] = sym_word;
	v->a[87135] = 5;
	v->a[87136] = actions(3);
	v->a[87137] = 1;
	v->a[87138] = sym_comment;
	v->a[87139] = actions(6001);
	small_parse_table_4357(v);
}

void	small_parse_table_4357(t_small_parse_table_array *v)
{
	v->a[87140] = 1;
	v->a[87141] = sym__special_character;
	v->a[87142] = state(1814);
	v->a[87143] = 1;
	v->a[87144] = aux_sym__literal_repeat1;
	v->a[87145] = actions(1364);
	v->a[87146] = 4;
	v->a[87147] = sym_file_descriptor;
	v->a[87148] = sym_test_operator;
	v->a[87149] = sym__brace_start;
	v->a[87150] = aux_sym_heredoc_redirect_token1;
	v->a[87151] = actions(1362);
	v->a[87152] = 38;
	v->a[87153] = anon_sym_LPAREN_LPAREN;
	v->a[87154] = anon_sym_SEMI;
	v->a[87155] = anon_sym_PIPE_PIPE;
	v->a[87156] = anon_sym_AMP_AMP;
	v->a[87157] = anon_sym_PIPE;
	v->a[87158] = anon_sym_AMP;
	v->a[87159] = anon_sym_LT;
	small_parse_table_4358(v);
}

void	small_parse_table_4358(t_small_parse_table_array *v)
{
	v->a[87160] = anon_sym_GT;
	v->a[87161] = anon_sym_LT_LT;
	v->a[87162] = anon_sym_GT_GT;
	v->a[87163] = anon_sym_SEMI_SEMI;
	v->a[87164] = anon_sym_SEMI_AMP;
	v->a[87165] = anon_sym_SEMI_SEMI_AMP;
	v->a[87166] = anon_sym_PIPE_AMP;
	v->a[87167] = anon_sym_AMP_GT;
	v->a[87168] = anon_sym_AMP_GT_GT;
	v->a[87169] = anon_sym_LT_AMP;
	v->a[87170] = anon_sym_GT_AMP;
	v->a[87171] = anon_sym_GT_PIPE;
	v->a[87172] = anon_sym_LT_AMP_DASH;
	v->a[87173] = anon_sym_GT_AMP_DASH;
	v->a[87174] = anon_sym_LT_LT_DASH;
	v->a[87175] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87176] = anon_sym_DOLLAR_LBRACK;
	v->a[87177] = anon_sym_DOLLAR;
	v->a[87178] = anon_sym_DQUOTE;
	v->a[87179] = sym_raw_string;
	small_parse_table_4359(v);
}

void	small_parse_table_4359(t_small_parse_table_array *v)
{
	v->a[87180] = sym_ansi_c_string;
	v->a[87181] = aux_sym_number_token1;
	v->a[87182] = aux_sym_number_token2;
	v->a[87183] = anon_sym_DOLLAR_LBRACE;
	v->a[87184] = anon_sym_DOLLAR_LPAREN;
	v->a[87185] = anon_sym_BQUOTE;
	v->a[87186] = anon_sym_DOLLAR_BQUOTE;
	v->a[87187] = anon_sym_LT_LPAREN;
	v->a[87188] = anon_sym_GT_LPAREN;
	v->a[87189] = aux_sym__simple_variable_name_token1;
	v->a[87190] = sym_word;
	v->a[87191] = 3;
	v->a[87192] = actions(3);
	v->a[87193] = 1;
	v->a[87194] = sym_comment;
	v->a[87195] = actions(1294);
	v->a[87196] = 5;
	v->a[87197] = sym_file_descriptor;
	v->a[87198] = sym__concat;
	v->a[87199] = sym_test_operator;
	small_parse_table_4360(v);
}

/* EOF small_parse_table_871.c */
