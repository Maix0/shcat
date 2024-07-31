/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_425.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2125(t_small_parse_table_array *v)
{
	v->a[42500] = anon_sym_DOLLAR_LPAREN;
	v->a[42501] = actions(1351);
	v->a[42502] = 1;
	v->a[42503] = anon_sym_BQUOTE;
	v->a[42504] = actions(1353);
	v->a[42505] = 1;
	v->a[42506] = sym_extglob_pattern;
	v->a[42507] = actions(1418);
	v->a[42508] = 1;
	v->a[42509] = anon_sym_esac;
	v->a[42510] = state(797);
	v->a[42511] = 1;
	v->a[42512] = aux_sym_case_statement_repeat1;
	v->a[42513] = state(1432);
	v->a[42514] = 1;
	v->a[42515] = sym_case_item;
	v->a[42516] = state(1739);
	v->a[42517] = 1;
	v->a[42518] = sym__case_item_last;
	v->a[42519] = state(1594);
	small_parse_table_2126(v);
}

void	small_parse_table_2126(t_small_parse_table_array *v)
{
	v->a[42520] = 2;
	v->a[42521] = sym_concatenation;
	v->a[42522] = sym__extglob_blob;
	v->a[42523] = actions(1333);
	v->a[42524] = 3;
	v->a[42525] = sym_raw_string;
	v->a[42526] = sym_number;
	v->a[42527] = sym_word;
	v->a[42528] = state(1520);
	v->a[42529] = 5;
	v->a[42530] = sym_arithmetic_expansion;
	v->a[42531] = sym_string;
	v->a[42532] = sym_simple_expansion;
	v->a[42533] = sym_expansion;
	v->a[42534] = sym_command_substitution;
	v->a[42535] = 16;
	v->a[42536] = actions(3);
	v->a[42537] = 1;
	v->a[42538] = sym_comment;
	v->a[42539] = actions(1337);
	small_parse_table_2127(v);
}

void	small_parse_table_2127(t_small_parse_table_array *v)
{
	v->a[42540] = 1;
	v->a[42541] = anon_sym_LPAREN;
	v->a[42542] = actions(1341);
	v->a[42543] = 1;
	v->a[42544] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42545] = actions(1343);
	v->a[42546] = 1;
	v->a[42547] = anon_sym_DOLLAR;
	v->a[42548] = actions(1345);
	v->a[42549] = 1;
	v->a[42550] = anon_sym_DQUOTE;
	v->a[42551] = actions(1347);
	v->a[42552] = 1;
	v->a[42553] = anon_sym_DOLLAR_LBRACE;
	v->a[42554] = actions(1349);
	v->a[42555] = 1;
	v->a[42556] = anon_sym_DOLLAR_LPAREN;
	v->a[42557] = actions(1351);
	v->a[42558] = 1;
	v->a[42559] = anon_sym_BQUOTE;
	small_parse_table_2128(v);
}

void	small_parse_table_2128(t_small_parse_table_array *v)
{
	v->a[42560] = actions(1353);
	v->a[42561] = 1;
	v->a[42562] = sym_extglob_pattern;
	v->a[42563] = actions(1583);
	v->a[42564] = 1;
	v->a[42565] = anon_sym_esac;
	v->a[42566] = state(805);
	v->a[42567] = 1;
	v->a[42568] = aux_sym_case_statement_repeat1;
	v->a[42569] = state(1432);
	v->a[42570] = 1;
	v->a[42571] = sym_case_item;
	v->a[42572] = state(1731);
	v->a[42573] = 1;
	v->a[42574] = sym__case_item_last;
	v->a[42575] = state(1594);
	v->a[42576] = 2;
	v->a[42577] = sym_concatenation;
	v->a[42578] = sym__extglob_blob;
	v->a[42579] = actions(1333);
	small_parse_table_2129(v);
}

void	small_parse_table_2129(t_small_parse_table_array *v)
{
	v->a[42580] = 3;
	v->a[42581] = sym_raw_string;
	v->a[42582] = sym_number;
	v->a[42583] = sym_word;
	v->a[42584] = state(1520);
	v->a[42585] = 5;
	v->a[42586] = sym_arithmetic_expansion;
	v->a[42587] = sym_string;
	v->a[42588] = sym_simple_expansion;
	v->a[42589] = sym_expansion;
	v->a[42590] = sym_command_substitution;
	v->a[42591] = 3;
	v->a[42592] = actions(3);
	v->a[42593] = 1;
	v->a[42594] = sym_comment;
	v->a[42595] = actions(1077);
	v->a[42596] = 1;
	v->a[42597] = sym__bare_dollar;
	v->a[42598] = actions(1079);
	v->a[42599] = 21;
	small_parse_table_2130(v);
}

/* EOF small_parse_table_425.c */
