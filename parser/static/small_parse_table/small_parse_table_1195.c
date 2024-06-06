/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1195.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5975(t_small_parse_table_array *v)
{
	v->a[119500] = anon_sym_DQUOTE;
	v->a[119501] = actions(173);
	v->a[119502] = 1;
	v->a[119503] = aux_sym_number_token1;
	v->a[119504] = actions(175);
	v->a[119505] = 1;
	v->a[119506] = aux_sym_number_token2;
	v->a[119507] = actions(177);
	v->a[119508] = 1;
	v->a[119509] = anon_sym_DOLLAR_LBRACE;
	v->a[119510] = actions(179);
	v->a[119511] = 1;
	v->a[119512] = anon_sym_DOLLAR_LPAREN;
	v->a[119513] = actions(181);
	v->a[119514] = 1;
	v->a[119515] = anon_sym_BQUOTE;
	v->a[119516] = actions(183);
	v->a[119517] = 1;
	v->a[119518] = anon_sym_DOLLAR_BQUOTE;
	v->a[119519] = actions(189);
	small_parse_table_5976(v);
}

void	small_parse_table_5976(t_small_parse_table_array *v)
{
	v->a[119520] = 1;
	v->a[119521] = sym__brace_start;
	v->a[119522] = actions(6454);
	v->a[119523] = 1;
	v->a[119524] = sym_word;
	v->a[119525] = actions(6456);
	v->a[119526] = 1;
	v->a[119527] = sym__special_character;
	v->a[119528] = actions(6460);
	v->a[119529] = 1;
	v->a[119530] = sym__comment_word;
	v->a[119531] = actions(6985);
	v->a[119532] = 1;
	v->a[119533] = anon_sym_DOLLAR;
	v->a[119534] = actions(6458);
	v->a[119535] = 3;
	v->a[119536] = sym_test_operator;
	v->a[119537] = sym__bare_dollar;
	v->a[119538] = sym_raw_string;
	v->a[119539] = state(560);
	small_parse_table_5977(v);
}

void	small_parse_table_5977(t_small_parse_table_array *v)
{
	v->a[119540] = 7;
	v->a[119541] = sym_arithmetic_expansion;
	v->a[119542] = sym_brace_expression;
	v->a[119543] = sym_string;
	v->a[119544] = sym_number;
	v->a[119545] = sym_simple_expansion;
	v->a[119546] = sym_expansion;
	v->a[119547] = sym_command_substitution;
	v->a[119548] = 16;
	v->a[119549] = actions(3);
	v->a[119550] = 1;
	v->a[119551] = sym_comment;
	v->a[119552] = actions(699);
	v->a[119553] = 1;
	v->a[119554] = anon_sym_DOLLAR;
	v->a[119555] = actions(705);
	v->a[119556] = 1;
	v->a[119557] = aux_sym_number_token1;
	v->a[119558] = actions(707);
	v->a[119559] = 1;
	small_parse_table_5978(v);
}

void	small_parse_table_5978(t_small_parse_table_array *v)
{
	v->a[119560] = aux_sym_number_token2;
	v->a[119561] = actions(711);
	v->a[119562] = 1;
	v->a[119563] = anon_sym_DOLLAR_LPAREN;
	v->a[119564] = actions(721);
	v->a[119565] = 1;
	v->a[119566] = sym__brace_start;
	v->a[119567] = actions(6661);
	v->a[119568] = 1;
	v->a[119569] = sym_word;
	v->a[119570] = actions(6663);
	v->a[119571] = 1;
	v->a[119572] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119573] = actions(6667);
	v->a[119574] = 1;
	v->a[119575] = sym__special_character;
	v->a[119576] = actions(6669);
	v->a[119577] = 1;
	v->a[119578] = anon_sym_DQUOTE;
	v->a[119579] = actions(6673);
	small_parse_table_5979(v);
}

void	small_parse_table_5979(t_small_parse_table_array *v)
{
	v->a[119580] = 1;
	v->a[119581] = anon_sym_DOLLAR_LBRACE;
	v->a[119582] = actions(6675);
	v->a[119583] = 1;
	v->a[119584] = anon_sym_BQUOTE;
	v->a[119585] = actions(6677);
	v->a[119586] = 1;
	v->a[119587] = anon_sym_DOLLAR_BQUOTE;
	v->a[119588] = actions(6679);
	v->a[119589] = 1;
	v->a[119590] = sym__comment_word;
	v->a[119591] = actions(6671);
	v->a[119592] = 3;
	v->a[119593] = sym_test_operator;
	v->a[119594] = sym__bare_dollar;
	v->a[119595] = sym_raw_string;
	v->a[119596] = state(626);
	v->a[119597] = 7;
	v->a[119598] = sym_arithmetic_expansion;
	v->a[119599] = sym_brace_expression;
	small_parse_table_5980(v);
}

/* EOF small_parse_table_1195.c */
