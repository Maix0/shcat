/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_847.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4235(t_small_parse_table_array *v)
{
	v->a[84700] = 1;
	v->a[84701] = sym_word;
	v->a[84702] = actions(4340);
	v->a[84703] = 1;
	v->a[84704] = anon_sym_DOLLAR;
	v->a[84705] = actions(4346);
	v->a[84706] = 1;
	v->a[84707] = aux_sym_number_token1;
	v->a[84708] = actions(4348);
	v->a[84709] = 1;
	v->a[84710] = aux_sym_number_token2;
	v->a[84711] = actions(4352);
	v->a[84712] = 1;
	v->a[84713] = anon_sym_DOLLAR_LPAREN;
	v->a[84714] = actions(4360);
	v->a[84715] = 1;
	v->a[84716] = sym_extglob_pattern;
	v->a[84717] = actions(4362);
	v->a[84718] = 1;
	v->a[84719] = sym__brace_start;
	small_parse_table_4236(v);
}

void	small_parse_table_4236(t_small_parse_table_array *v)
{
	v->a[84720] = actions(4548);
	v->a[84721] = 1;
	v->a[84722] = anon_sym_LPAREN;
	v->a[84723] = actions(4550);
	v->a[84724] = 1;
	v->a[84725] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84726] = actions(4552);
	v->a[84727] = 1;
	v->a[84728] = sym__special_character;
	v->a[84729] = actions(4554);
	v->a[84730] = 1;
	v->a[84731] = anon_sym_DQUOTE;
	v->a[84732] = actions(4556);
	v->a[84733] = 1;
	v->a[84734] = anon_sym_DOLLAR_LBRACE;
	v->a[84735] = actions(4558);
	v->a[84736] = 1;
	v->a[84737] = anon_sym_BQUOTE;
	v->a[84738] = actions(4560);
	v->a[84739] = 1;
	small_parse_table_4237(v);
}

void	small_parse_table_4237(t_small_parse_table_array *v)
{
	v->a[84740] = anon_sym_DOLLAR_BQUOTE;
	v->a[84741] = state(3393);
	v->a[84742] = 1;
	v->a[84743] = aux_sym__literal_repeat1;
	v->a[84744] = state(3870);
	v->a[84745] = 1;
	v->a[84746] = sym_last_case_item;
	v->a[84747] = actions(4358);
	v->a[84748] = 2;
	v->a[84749] = sym_test_operator;
	v->a[84750] = sym_raw_string;
	v->a[84751] = state(1881);
	v->a[84752] = 2;
	v->a[84753] = sym_case_item;
	v->a[84754] = aux_sym_case_statement_repeat1;
	v->a[84755] = state(3472);
	v->a[84756] = 2;
	v->a[84757] = sym_concatenation;
	v->a[84758] = sym__extglob_blob;
	v->a[84759] = state(3295);
	small_parse_table_4238(v);
}

void	small_parse_table_4238(t_small_parse_table_array *v)
{
	v->a[84760] = 7;
	v->a[84761] = sym_arithmetic_expansion;
	v->a[84762] = sym_brace_expression;
	v->a[84763] = sym_string;
	v->a[84764] = sym_number;
	v->a[84765] = sym_simple_expansion;
	v->a[84766] = sym_expansion;
	v->a[84767] = sym_command_substitution;
	v->a[84768] = 21;
	v->a[84769] = actions(57);
	v->a[84770] = 1;
	v->a[84771] = sym_comment;
	v->a[84772] = actions(4584);
	v->a[84773] = 1;
	v->a[84774] = anon_sym_LPAREN;
	v->a[84775] = actions(4586);
	v->a[84776] = 1;
	v->a[84777] = anon_sym_BANG;
	v->a[84778] = actions(4592);
	v->a[84779] = 1;
	small_parse_table_4239(v);
}

void	small_parse_table_4239(t_small_parse_table_array *v)
{
	v->a[84780] = anon_sym_TILDE;
	v->a[84781] = actions(4594);
	v->a[84782] = 1;
	v->a[84783] = anon_sym_DOLLAR;
	v->a[84784] = actions(4596);
	v->a[84785] = 1;
	v->a[84786] = anon_sym_DQUOTE;
	v->a[84787] = actions(4598);
	v->a[84788] = 1;
	v->a[84789] = aux_sym_number_token1;
	v->a[84790] = actions(4600);
	v->a[84791] = 1;
	v->a[84792] = aux_sym_number_token2;
	v->a[84793] = actions(4602);
	v->a[84794] = 1;
	v->a[84795] = anon_sym_DOLLAR_LBRACE;
	v->a[84796] = actions(4604);
	v->a[84797] = 1;
	v->a[84798] = anon_sym_DOLLAR_LPAREN;
	v->a[84799] = actions(4606);
	small_parse_table_4240(v);
}

/* EOF small_parse_table_847.c */
