/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_885.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4425(t_small_parse_table_array *v)
{
	v->a[88500] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88501] = actions(4552);
	v->a[88502] = 1;
	v->a[88503] = sym__special_character;
	v->a[88504] = actions(4554);
	v->a[88505] = 1;
	v->a[88506] = anon_sym_DQUOTE;
	v->a[88507] = actions(4556);
	v->a[88508] = 1;
	v->a[88509] = anon_sym_DOLLAR_LBRACE;
	v->a[88510] = actions(4558);
	v->a[88511] = 1;
	v->a[88512] = anon_sym_BQUOTE;
	v->a[88513] = actions(4560);
	v->a[88514] = 1;
	v->a[88515] = anon_sym_DOLLAR_BQUOTE;
	v->a[88516] = state(3393);
	v->a[88517] = 1;
	v->a[88518] = aux_sym__literal_repeat1;
	v->a[88519] = state(4047);
	small_parse_table_4426(v);
}

void	small_parse_table_4426(t_small_parse_table_array *v)
{
	v->a[88520] = 1;
	v->a[88521] = sym_last_case_item;
	v->a[88522] = actions(4358);
	v->a[88523] = 2;
	v->a[88524] = sym_test_operator;
	v->a[88525] = sym_raw_string;
	v->a[88526] = state(1881);
	v->a[88527] = 2;
	v->a[88528] = sym_case_item;
	v->a[88529] = aux_sym_case_statement_repeat1;
	v->a[88530] = state(3472);
	v->a[88531] = 2;
	v->a[88532] = sym_concatenation;
	v->a[88533] = sym__extglob_blob;
	v->a[88534] = state(3295);
	v->a[88535] = 7;
	v->a[88536] = sym_arithmetic_expansion;
	v->a[88537] = sym_brace_expression;
	v->a[88538] = sym_string;
	v->a[88539] = sym_number;
	small_parse_table_4427(v);
}

void	small_parse_table_4427(t_small_parse_table_array *v)
{
	v->a[88540] = sym_simple_expansion;
	v->a[88541] = sym_expansion;
	v->a[88542] = sym_command_substitution;
	v->a[88543] = 21;
	v->a[88544] = actions(57);
	v->a[88545] = 1;
	v->a[88546] = sym_comment;
	v->a[88547] = actions(4328);
	v->a[88548] = 1;
	v->a[88549] = sym_word;
	v->a[88550] = actions(4340);
	v->a[88551] = 1;
	v->a[88552] = anon_sym_DOLLAR;
	v->a[88553] = actions(4346);
	v->a[88554] = 1;
	v->a[88555] = aux_sym_number_token1;
	v->a[88556] = actions(4348);
	v->a[88557] = 1;
	v->a[88558] = aux_sym_number_token2;
	v->a[88559] = actions(4352);
	small_parse_table_4428(v);
}

void	small_parse_table_4428(t_small_parse_table_array *v)
{
	v->a[88560] = 1;
	v->a[88561] = anon_sym_DOLLAR_LPAREN;
	v->a[88562] = actions(4360);
	v->a[88563] = 1;
	v->a[88564] = sym_extglob_pattern;
	v->a[88565] = actions(4362);
	v->a[88566] = 1;
	v->a[88567] = sym__brace_start;
	v->a[88568] = actions(4548);
	v->a[88569] = 1;
	v->a[88570] = anon_sym_LPAREN;
	v->a[88571] = actions(4550);
	v->a[88572] = 1;
	v->a[88573] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88574] = actions(4552);
	v->a[88575] = 1;
	v->a[88576] = sym__special_character;
	v->a[88577] = actions(4554);
	v->a[88578] = 1;
	v->a[88579] = anon_sym_DQUOTE;
	small_parse_table_4429(v);
}

void	small_parse_table_4429(t_small_parse_table_array *v)
{
	v->a[88580] = actions(4556);
	v->a[88581] = 1;
	v->a[88582] = anon_sym_DOLLAR_LBRACE;
	v->a[88583] = actions(4558);
	v->a[88584] = 1;
	v->a[88585] = anon_sym_BQUOTE;
	v->a[88586] = actions(4560);
	v->a[88587] = 1;
	v->a[88588] = anon_sym_DOLLAR_BQUOTE;
	v->a[88589] = state(3393);
	v->a[88590] = 1;
	v->a[88591] = aux_sym__literal_repeat1;
	v->a[88592] = state(4046);
	v->a[88593] = 1;
	v->a[88594] = sym_last_case_item;
	v->a[88595] = actions(4358);
	v->a[88596] = 2;
	v->a[88597] = sym_test_operator;
	v->a[88598] = sym_raw_string;
	v->a[88599] = state(1881);
	small_parse_table_4430(v);
}

/* EOF small_parse_table_885.c */
