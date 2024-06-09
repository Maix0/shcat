/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_770.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3850(t_small_parse_table_array *v)
{
	v->a[77000] = sym_raw_string;
	v->a[77001] = sym_word;
	v->a[77002] = state(1216);
	v->a[77003] = 2;
	v->a[77004] = sym_concatenation;
	v->a[77005] = aux_sym_for_statement_repeat1;
	v->a[77006] = state(1503);
	v->a[77007] = 6;
	v->a[77008] = sym_arithmetic_expansion;
	v->a[77009] = sym_string;
	v->a[77010] = sym_number;
	v->a[77011] = sym_simple_expansion;
	v->a[77012] = sym_expansion;
	v->a[77013] = sym_command_substitution;
	v->a[77014] = 12;
	v->a[77015] = actions(3);
	v->a[77016] = 1;
	v->a[77017] = sym_comment;
	v->a[77018] = actions(761);
	v->a[77019] = 1;
	small_parse_table_3851(v);
}

void	small_parse_table_3851(t_small_parse_table_array *v)
{
	v->a[77020] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77021] = actions(763);
	v->a[77022] = 1;
	v->a[77023] = anon_sym_DOLLAR;
	v->a[77024] = actions(765);
	v->a[77025] = 1;
	v->a[77026] = anon_sym_DQUOTE;
	v->a[77027] = actions(767);
	v->a[77028] = 1;
	v->a[77029] = aux_sym_number_token1;
	v->a[77030] = actions(769);
	v->a[77031] = 1;
	v->a[77032] = aux_sym_number_token2;
	v->a[77033] = actions(771);
	v->a[77034] = 1;
	v->a[77035] = anon_sym_DOLLAR_LBRACE;
	v->a[77036] = actions(773);
	v->a[77037] = 1;
	v->a[77038] = anon_sym_DOLLAR_LPAREN;
	v->a[77039] = actions(775);
	small_parse_table_3852(v);
}

void	small_parse_table_3852(t_small_parse_table_array *v)
{
	v->a[77040] = 1;
	v->a[77041] = anon_sym_BQUOTE;
	v->a[77042] = actions(955);
	v->a[77043] = 2;
	v->a[77044] = sym_raw_string;
	v->a[77045] = sym_word;
	v->a[77046] = state(255);
	v->a[77047] = 2;
	v->a[77048] = sym_concatenation;
	v->a[77049] = aux_sym_for_statement_repeat1;
	v->a[77050] = state(566);
	v->a[77051] = 6;
	v->a[77052] = sym_arithmetic_expansion;
	v->a[77053] = sym_string;
	v->a[77054] = sym_number;
	v->a[77055] = sym_simple_expansion;
	v->a[77056] = sym_expansion;
	v->a[77057] = sym_command_substitution;
	v->a[77058] = 3;
	v->a[77059] = actions(1404);
	small_parse_table_3853(v);
}

void	small_parse_table_3853(t_small_parse_table_array *v)
{
	v->a[77060] = 1;
	v->a[77061] = sym_comment;
	v->a[77062] = actions(1317);
	v->a[77063] = 7;
	v->a[77064] = anon_sym_PIPE;
	v->a[77065] = anon_sym_LT;
	v->a[77066] = anon_sym_GT;
	v->a[77067] = anon_sym_AMP_GT;
	v->a[77068] = anon_sym_LT_AMP;
	v->a[77069] = anon_sym_GT_AMP;
	v->a[77070] = anon_sym_LT_LT;
	v->a[77071] = actions(1319);
	v->a[77072] = 11;
	v->a[77073] = sym_file_descriptor;
	v->a[77074] = sym__concat;
	v->a[77075] = anon_sym_AMP_AMP;
	v->a[77076] = anon_sym_PIPE_PIPE;
	v->a[77077] = anon_sym_GT_GT;
	v->a[77078] = anon_sym_AMP_GT_GT;
	v->a[77079] = anon_sym_GT_PIPE;
	small_parse_table_3854(v);
}

void	small_parse_table_3854(t_small_parse_table_array *v)
{
	v->a[77080] = anon_sym_LT_AMP_DASH;
	v->a[77081] = anon_sym_GT_AMP_DASH;
	v->a[77082] = anon_sym_LT_LT_DASH;
	v->a[77083] = aux_sym_concatenation_token1;
	v->a[77084] = 3;
	v->a[77085] = actions(1404);
	v->a[77086] = 1;
	v->a[77087] = sym_comment;
	v->a[77088] = actions(1249);
	v->a[77089] = 7;
	v->a[77090] = anon_sym_PIPE;
	v->a[77091] = anon_sym_LT;
	v->a[77092] = anon_sym_GT;
	v->a[77093] = anon_sym_AMP_GT;
	v->a[77094] = anon_sym_LT_AMP;
	v->a[77095] = anon_sym_GT_AMP;
	v->a[77096] = anon_sym_LT_LT;
	v->a[77097] = actions(1247);
	v->a[77098] = 11;
	v->a[77099] = sym_file_descriptor;
	small_parse_table_3855(v);
}

/* EOF small_parse_table_770.c */
