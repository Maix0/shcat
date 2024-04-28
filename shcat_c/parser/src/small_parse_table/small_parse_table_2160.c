/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2160.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10800(t_small_parse_table_array *v)
{
	v->a[216000] = sym__comment_word;
	v->a[216001] = actions(4631);
	v->a[216002] = 2;
	v->a[216003] = anon_sym_LPAREN_LPAREN;
	v->a[216004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[216005] = actions(4655);
	v->a[216006] = 2;
	v->a[216007] = anon_sym_LT_LPAREN;
	v->a[216008] = anon_sym_GT_LPAREN;
	v->a[216009] = actions(9334);
	v->a[216010] = 2;
	v->a[216011] = sym_test_operator;
	v->a[216012] = sym__special_character;
	v->a[216013] = actions(9336);
	v->a[216014] = 3;
	v->a[216015] = sym__bare_dollar;
	v->a[216016] = sym_raw_string;
	v->a[216017] = sym_ansi_c_string;
	v->a[216018] = state(2634);
	v->a[216019] = 9;
	small_parse_table_10801(v);
}

void	small_parse_table_10801(t_small_parse_table_array *v)
{
	v->a[216020] = sym_arithmetic_expansion;
	v->a[216021] = sym_brace_expression;
	v->a[216022] = sym_string;
	v->a[216023] = sym_translated_string;
	v->a[216024] = sym_number;
	v->a[216025] = sym_simple_expansion;
	v->a[216026] = sym_expansion;
	v->a[216027] = sym_command_substitution;
	v->a[216028] = sym_process_substitution;
	v->a[216029] = 18;
	v->a[216030] = actions(3);
	v->a[216031] = 1;
	v->a[216032] = sym_comment;
	v->a[216033] = actions(3886);
	v->a[216034] = 1;
	v->a[216035] = aux_sym_number_token1;
	v->a[216036] = actions(3888);
	v->a[216037] = 1;
	v->a[216038] = aux_sym_number_token2;
	v->a[216039] = actions(3892);
	small_parse_table_10802(v);
}

void	small_parse_table_10802(t_small_parse_table_array *v)
{
	v->a[216040] = 1;
	v->a[216041] = anon_sym_DOLLAR_LPAREN;
	v->a[216042] = actions(3902);
	v->a[216043] = 1;
	v->a[216044] = sym__brace_start;
	v->a[216045] = actions(8992);
	v->a[216046] = 1;
	v->a[216047] = anon_sym_DOLLAR_LBRACK;
	v->a[216048] = actions(8996);
	v->a[216049] = 1;
	v->a[216050] = anon_sym_DQUOTE;
	v->a[216051] = actions(9000);
	v->a[216052] = 1;
	v->a[216053] = anon_sym_DOLLAR_LBRACE;
	v->a[216054] = actions(9002);
	v->a[216055] = 1;
	v->a[216056] = anon_sym_BQUOTE;
	v->a[216057] = actions(9004);
	v->a[216058] = 1;
	v->a[216059] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10803(v);
}

void	small_parse_table_10803(t_small_parse_table_array *v)
{
	v->a[216060] = actions(9740);
	v->a[216061] = 1;
	v->a[216062] = sym_word;
	v->a[216063] = actions(9746);
	v->a[216064] = 1;
	v->a[216065] = sym__comment_word;
	v->a[216066] = actions(10318);
	v->a[216067] = 1;
	v->a[216068] = anon_sym_DOLLAR;
	v->a[216069] = actions(8990);
	v->a[216070] = 2;
	v->a[216071] = anon_sym_LPAREN_LPAREN;
	v->a[216072] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[216073] = actions(9006);
	v->a[216074] = 2;
	v->a[216075] = anon_sym_LT_LPAREN;
	v->a[216076] = anon_sym_GT_LPAREN;
	v->a[216077] = actions(9742);
	v->a[216078] = 2;
	v->a[216079] = sym_test_operator;
	small_parse_table_10804(v);
}

void	small_parse_table_10804(t_small_parse_table_array *v)
{
	v->a[216080] = sym__special_character;
	v->a[216081] = actions(9744);
	v->a[216082] = 3;
	v->a[216083] = sym__bare_dollar;
	v->a[216084] = sym_raw_string;
	v->a[216085] = sym_ansi_c_string;
	v->a[216086] = state(2004);
	v->a[216087] = 9;
	v->a[216088] = sym_arithmetic_expansion;
	v->a[216089] = sym_brace_expression;
	v->a[216090] = sym_string;
	v->a[216091] = sym_translated_string;
	v->a[216092] = sym_number;
	v->a[216093] = sym_simple_expansion;
	v->a[216094] = sym_expansion;
	v->a[216095] = sym_command_substitution;
	v->a[216096] = sym_process_substitution;
	v->a[216097] = 18;
	v->a[216098] = actions(3);
	v->a[216099] = 1;
	small_parse_table_10805(v);
}

/* EOF small_parse_table_2160.c */
