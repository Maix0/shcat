/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_664.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3320(t_small_parse_table_array *v)
{
	v->a[66400] = anon_sym_DOLLAR_LBRACE;
	v->a[66401] = anon_sym_DOLLAR_BQUOTE;
	v->a[66402] = 3;
	v->a[66403] = actions(57);
	v->a[66404] = 1;
	v->a[66405] = sym_comment;
	v->a[66406] = actions(3064);
	v->a[66407] = 14;
	v->a[66408] = anon_sym_PIPE;
	v->a[66409] = anon_sym_LT;
	v->a[66410] = anon_sym_GT;
	v->a[66411] = anon_sym_AMP_GT;
	v->a[66412] = anon_sym_LT_AMP;
	v->a[66413] = anon_sym_GT_AMP;
	v->a[66414] = anon_sym_LT_LT;
	v->a[66415] = anon_sym_DOLLAR;
	v->a[66416] = aux_sym_number_token1;
	v->a[66417] = aux_sym_number_token2;
	v->a[66418] = anon_sym_DOLLAR_LPAREN;
	v->a[66419] = anon_sym_BQUOTE;
	small_parse_table_3321(v);
}

void	small_parse_table_3321(t_small_parse_table_array *v)
{
	v->a[66420] = aux_sym__simple_variable_name_token1;
	v->a[66421] = sym_word;
	v->a[66422] = actions(3066);
	v->a[66423] = 21;
	v->a[66424] = sym_file_descriptor;
	v->a[66425] = sym__concat;
	v->a[66426] = sym_variable_name;
	v->a[66427] = sym_test_operator;
	v->a[66428] = sym__brace_start;
	v->a[66429] = anon_sym_PIPE_AMP;
	v->a[66430] = anon_sym_AMP_AMP;
	v->a[66431] = anon_sym_PIPE_PIPE;
	v->a[66432] = anon_sym_GT_GT;
	v->a[66433] = anon_sym_AMP_GT_GT;
	v->a[66434] = anon_sym_GT_PIPE;
	v->a[66435] = anon_sym_LT_AMP_DASH;
	v->a[66436] = anon_sym_GT_AMP_DASH;
	v->a[66437] = anon_sym_LT_LT_DASH;
	v->a[66438] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66439] = aux_sym_concatenation_token1;
	small_parse_table_3322(v);
}

void	small_parse_table_3322(t_small_parse_table_array *v)
{
	v->a[66440] = sym__special_character;
	v->a[66441] = anon_sym_DQUOTE;
	v->a[66442] = sym_raw_string;
	v->a[66443] = anon_sym_DOLLAR_LBRACE;
	v->a[66444] = anon_sym_DOLLAR_BQUOTE;
	v->a[66445] = 19;
	v->a[66446] = actions(57);
	v->a[66447] = 1;
	v->a[66448] = sym_comment;
	v->a[66449] = actions(4120);
	v->a[66450] = 1;
	v->a[66451] = anon_sym_PIPE;
	v->a[66452] = actions(4122);
	v->a[66453] = 1;
	v->a[66454] = anon_sym_AMP_AMP;
	v->a[66455] = actions(4124);
	v->a[66456] = 1;
	v->a[66457] = anon_sym_PIPE_PIPE;
	v->a[66458] = actions(4126);
	v->a[66459] = 1;
	small_parse_table_3323(v);
}

void	small_parse_table_3323(t_small_parse_table_array *v)
{
	v->a[66460] = anon_sym_EQ;
	v->a[66461] = actions(4132);
	v->a[66462] = 1;
	v->a[66463] = anon_sym_COMMA;
	v->a[66464] = actions(4138);
	v->a[66465] = 1;
	v->a[66466] = anon_sym_CARET;
	v->a[66467] = actions(4140);
	v->a[66468] = 1;
	v->a[66469] = anon_sym_AMP;
	v->a[66470] = actions(4150);
	v->a[66471] = 1;
	v->a[66472] = anon_sym_QMARK;
	v->a[66473] = actions(4215);
	v->a[66474] = 1;
	v->a[66475] = anon_sym_RPAREN_RPAREN;
	v->a[66476] = state(3469);
	v->a[66477] = 1;
	v->a[66478] = aux_sym_arithmetic_expansion_repeat1;
	v->a[66479] = actions(4128);
	small_parse_table_3324(v);
}

void	small_parse_table_3324(t_small_parse_table_array *v)
{
	v->a[66480] = 2;
	v->a[66481] = anon_sym_LT;
	v->a[66482] = anon_sym_GT;
	v->a[66483] = actions(4130);
	v->a[66484] = 2;
	v->a[66485] = anon_sym_GT_GT;
	v->a[66486] = anon_sym_LT_LT;
	v->a[66487] = actions(4142);
	v->a[66488] = 2;
	v->a[66489] = anon_sym_EQ_EQ;
	v->a[66490] = anon_sym_BANG_EQ;
	v->a[66491] = actions(4144);
	v->a[66492] = 2;
	v->a[66493] = anon_sym_LT_EQ;
	v->a[66494] = anon_sym_GT_EQ;
	v->a[66495] = actions(4146);
	v->a[66496] = 2;
	v->a[66497] = anon_sym_PLUS;
	v->a[66498] = anon_sym_DASH;
	v->a[66499] = actions(4152);
	small_parse_table_3325(v);
}

/* EOF small_parse_table_664.c */
