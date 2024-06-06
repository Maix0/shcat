/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_845.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4225(t_small_parse_table_array *v)
{
	v->a[84500] = sym__brace_start;
	v->a[84501] = actions(4548);
	v->a[84502] = 1;
	v->a[84503] = anon_sym_LPAREN;
	v->a[84504] = actions(4550);
	v->a[84505] = 1;
	v->a[84506] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84507] = actions(4552);
	v->a[84508] = 1;
	v->a[84509] = sym__special_character;
	v->a[84510] = actions(4554);
	v->a[84511] = 1;
	v->a[84512] = anon_sym_DQUOTE;
	v->a[84513] = actions(4556);
	v->a[84514] = 1;
	v->a[84515] = anon_sym_DOLLAR_LBRACE;
	v->a[84516] = actions(4558);
	v->a[84517] = 1;
	v->a[84518] = anon_sym_BQUOTE;
	v->a[84519] = actions(4560);
	small_parse_table_4226(v);
}

void	small_parse_table_4226(t_small_parse_table_array *v)
{
	v->a[84520] = 1;
	v->a[84521] = anon_sym_DOLLAR_BQUOTE;
	v->a[84522] = state(3393);
	v->a[84523] = 1;
	v->a[84524] = aux_sym__literal_repeat1;
	v->a[84525] = state(3943);
	v->a[84526] = 1;
	v->a[84527] = sym_last_case_item;
	v->a[84528] = actions(4358);
	v->a[84529] = 2;
	v->a[84530] = sym_test_operator;
	v->a[84531] = sym_raw_string;
	v->a[84532] = state(1881);
	v->a[84533] = 2;
	v->a[84534] = sym_case_item;
	v->a[84535] = aux_sym_case_statement_repeat1;
	v->a[84536] = state(3472);
	v->a[84537] = 2;
	v->a[84538] = sym_concatenation;
	v->a[84539] = sym__extglob_blob;
	small_parse_table_4227(v);
}

void	small_parse_table_4227(t_small_parse_table_array *v)
{
	v->a[84540] = state(3295);
	v->a[84541] = 7;
	v->a[84542] = sym_arithmetic_expansion;
	v->a[84543] = sym_brace_expression;
	v->a[84544] = sym_string;
	v->a[84545] = sym_number;
	v->a[84546] = sym_simple_expansion;
	v->a[84547] = sym_expansion;
	v->a[84548] = sym_command_substitution;
	v->a[84549] = 21;
	v->a[84550] = actions(57);
	v->a[84551] = 1;
	v->a[84552] = sym_comment;
	v->a[84553] = actions(4328);
	v->a[84554] = 1;
	v->a[84555] = sym_word;
	v->a[84556] = actions(4340);
	v->a[84557] = 1;
	v->a[84558] = anon_sym_DOLLAR;
	v->a[84559] = actions(4346);
	small_parse_table_4228(v);
}

void	small_parse_table_4228(t_small_parse_table_array *v)
{
	v->a[84560] = 1;
	v->a[84561] = aux_sym_number_token1;
	v->a[84562] = actions(4348);
	v->a[84563] = 1;
	v->a[84564] = aux_sym_number_token2;
	v->a[84565] = actions(4352);
	v->a[84566] = 1;
	v->a[84567] = anon_sym_DOLLAR_LPAREN;
	v->a[84568] = actions(4360);
	v->a[84569] = 1;
	v->a[84570] = sym_extglob_pattern;
	v->a[84571] = actions(4362);
	v->a[84572] = 1;
	v->a[84573] = sym__brace_start;
	v->a[84574] = actions(4548);
	v->a[84575] = 1;
	v->a[84576] = anon_sym_LPAREN;
	v->a[84577] = actions(4550);
	v->a[84578] = 1;
	v->a[84579] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4229(v);
}

void	small_parse_table_4229(t_small_parse_table_array *v)
{
	v->a[84580] = actions(4552);
	v->a[84581] = 1;
	v->a[84582] = sym__special_character;
	v->a[84583] = actions(4554);
	v->a[84584] = 1;
	v->a[84585] = anon_sym_DQUOTE;
	v->a[84586] = actions(4556);
	v->a[84587] = 1;
	v->a[84588] = anon_sym_DOLLAR_LBRACE;
	v->a[84589] = actions(4558);
	v->a[84590] = 1;
	v->a[84591] = anon_sym_BQUOTE;
	v->a[84592] = actions(4560);
	v->a[84593] = 1;
	v->a[84594] = anon_sym_DOLLAR_BQUOTE;
	v->a[84595] = state(3393);
	v->a[84596] = 1;
	v->a[84597] = aux_sym__literal_repeat1;
	v->a[84598] = state(3867);
	v->a[84599] = 1;
	small_parse_table_4230(v);
}

/* EOF small_parse_table_845.c */
