/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_805.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4025(t_small_parse_table_array *v)
{
	v->a[80500] = aux_sym_number_token2;
	v->a[80501] = actions(4352);
	v->a[80502] = 1;
	v->a[80503] = anon_sym_DOLLAR_LPAREN;
	v->a[80504] = actions(4360);
	v->a[80505] = 1;
	v->a[80506] = sym_extglob_pattern;
	v->a[80507] = actions(4362);
	v->a[80508] = 1;
	v->a[80509] = sym__brace_start;
	v->a[80510] = actions(4420);
	v->a[80511] = 1;
	v->a[80512] = anon_sym_esac;
	v->a[80513] = actions(4548);
	v->a[80514] = 1;
	v->a[80515] = anon_sym_LPAREN;
	v->a[80516] = actions(4550);
	v->a[80517] = 1;
	v->a[80518] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80519] = actions(4552);
	small_parse_table_4026(v);
}

void	small_parse_table_4026(t_small_parse_table_array *v)
{
	v->a[80520] = 1;
	v->a[80521] = sym__special_character;
	v->a[80522] = actions(4554);
	v->a[80523] = 1;
	v->a[80524] = anon_sym_DQUOTE;
	v->a[80525] = actions(4556);
	v->a[80526] = 1;
	v->a[80527] = anon_sym_DOLLAR_LBRACE;
	v->a[80528] = actions(4558);
	v->a[80529] = 1;
	v->a[80530] = anon_sym_BQUOTE;
	v->a[80531] = actions(4560);
	v->a[80532] = 1;
	v->a[80533] = anon_sym_DOLLAR_BQUOTE;
	v->a[80534] = state(3393);
	v->a[80535] = 1;
	v->a[80536] = aux_sym__literal_repeat1;
	v->a[80537] = state(3952);
	v->a[80538] = 1;
	v->a[80539] = sym_last_case_item;
	small_parse_table_4027(v);
}

void	small_parse_table_4027(t_small_parse_table_array *v)
{
	v->a[80540] = actions(4358);
	v->a[80541] = 2;
	v->a[80542] = sym_test_operator;
	v->a[80543] = sym_raw_string;
	v->a[80544] = state(1785);
	v->a[80545] = 2;
	v->a[80546] = sym_case_item;
	v->a[80547] = aux_sym_case_statement_repeat1;
	v->a[80548] = state(3472);
	v->a[80549] = 2;
	v->a[80550] = sym_concatenation;
	v->a[80551] = sym__extglob_blob;
	v->a[80552] = state(3295);
	v->a[80553] = 7;
	v->a[80554] = sym_arithmetic_expansion;
	v->a[80555] = sym_brace_expression;
	v->a[80556] = sym_string;
	v->a[80557] = sym_number;
	v->a[80558] = sym_simple_expansion;
	v->a[80559] = sym_expansion;
	small_parse_table_4028(v);
}

void	small_parse_table_4028(t_small_parse_table_array *v)
{
	v->a[80560] = sym_command_substitution;
	v->a[80561] = 22;
	v->a[80562] = actions(57);
	v->a[80563] = 1;
	v->a[80564] = sym_comment;
	v->a[80565] = actions(4328);
	v->a[80566] = 1;
	v->a[80567] = sym_word;
	v->a[80568] = actions(4340);
	v->a[80569] = 1;
	v->a[80570] = anon_sym_DOLLAR;
	v->a[80571] = actions(4346);
	v->a[80572] = 1;
	v->a[80573] = aux_sym_number_token1;
	v->a[80574] = actions(4348);
	v->a[80575] = 1;
	v->a[80576] = aux_sym_number_token2;
	v->a[80577] = actions(4352);
	v->a[80578] = 1;
	v->a[80579] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4029(v);
}

void	small_parse_table_4029(t_small_parse_table_array *v)
{
	v->a[80580] = actions(4360);
	v->a[80581] = 1;
	v->a[80582] = sym_extglob_pattern;
	v->a[80583] = actions(4362);
	v->a[80584] = 1;
	v->a[80585] = sym__brace_start;
	v->a[80586] = actions(4370);
	v->a[80587] = 1;
	v->a[80588] = anon_sym_esac;
	v->a[80589] = actions(4548);
	v->a[80590] = 1;
	v->a[80591] = anon_sym_LPAREN;
	v->a[80592] = actions(4550);
	v->a[80593] = 1;
	v->a[80594] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80595] = actions(4552);
	v->a[80596] = 1;
	v->a[80597] = sym__special_character;
	v->a[80598] = actions(4554);
	v->a[80599] = 1;
	small_parse_table_4030(v);
}

/* EOF small_parse_table_805.c */
