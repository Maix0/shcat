/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1427.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7135(t_small_parse_table_array *v)
{
	v->a[142700] = 3;
	v->a[142701] = actions(3);
	v->a[142702] = 1;
	v->a[142703] = sym_comment;
	v->a[142704] = actions(3117);
	v->a[142705] = 2;
	v->a[142706] = sym_regex;
	v->a[142707] = aux_sym__expansion_regex_token1;
	v->a[142708] = actions(3115);
	v->a[142709] = 4;
	v->a[142710] = anon_sym_RPAREN;
	v->a[142711] = anon_sym_DQUOTE;
	v->a[142712] = sym_raw_string;
	v->a[142713] = anon_sym_RBRACE3;
	v->a[142714] = 5;
	v->a[142715] = actions(57);
	v->a[142716] = 1;
	v->a[142717] = sym_comment;
	v->a[142718] = actions(355);
	v->a[142719] = 1;
	small_parse_table_7136(v);
}

void	small_parse_table_7136(t_small_parse_table_array *v)
{
	v->a[142720] = anon_sym_LBRACE;
	v->a[142721] = actions(8537);
	v->a[142722] = 1;
	v->a[142723] = anon_sym_if;
	v->a[142724] = actions(8539);
	v->a[142725] = 1;
	v->a[142726] = anon_sym_LPAREN;
	v->a[142727] = state(2324);
	v->a[142728] = 3;
	v->a[142729] = sym_if_statement;
	v->a[142730] = sym_compound_statement;
	v->a[142731] = sym_subshell;
	v->a[142732] = 6;
	v->a[142733] = actions(57);
	v->a[142734] = 1;
	v->a[142735] = sym_comment;
	v->a[142736] = actions(5629);
	v->a[142737] = 1;
	v->a[142738] = anon_sym_DOLLAR_LBRACE;
	v->a[142739] = actions(5631);
	small_parse_table_7137(v);
}

void	small_parse_table_7137(t_small_parse_table_array *v)
{
	v->a[142740] = 1;
	v->a[142741] = anon_sym_BQUOTE;
	v->a[142742] = actions(5633);
	v->a[142743] = 1;
	v->a[142744] = anon_sym_DOLLAR_BQUOTE;
	v->a[142745] = actions(8541);
	v->a[142746] = 1;
	v->a[142747] = anon_sym_DOLLAR_LPAREN;
	v->a[142748] = state(611);
	v->a[142749] = 2;
	v->a[142750] = sym_expansion;
	v->a[142751] = sym_command_substitution;
	v->a[142752] = 6;
	v->a[142753] = actions(49);
	v->a[142754] = 1;
	v->a[142755] = anon_sym_DOLLAR_LBRACE;
	v->a[142756] = actions(53);
	v->a[142757] = 1;
	v->a[142758] = anon_sym_BQUOTE;
	v->a[142759] = actions(55);
	small_parse_table_7138(v);
}

void	small_parse_table_7138(t_small_parse_table_array *v)
{
	v->a[142760] = 1;
	v->a[142761] = anon_sym_DOLLAR_BQUOTE;
	v->a[142762] = actions(57);
	v->a[142763] = 1;
	v->a[142764] = sym_comment;
	v->a[142765] = actions(8543);
	v->a[142766] = 1;
	v->a[142767] = anon_sym_DOLLAR_LPAREN;
	v->a[142768] = state(787);
	v->a[142769] = 2;
	v->a[142770] = sym_expansion;
	v->a[142771] = sym_command_substitution;
	v->a[142772] = 6;
	v->a[142773] = actions(57);
	v->a[142774] = 1;
	v->a[142775] = sym_comment;
	v->a[142776] = actions(8545);
	v->a[142777] = 1;
	v->a[142778] = anon_sym_PIPE;
	v->a[142779] = actions(8547);
	small_parse_table_7139(v);
}

void	small_parse_table_7139(t_small_parse_table_array *v)
{
	v->a[142780] = 1;
	v->a[142781] = anon_sym_RPAREN;
	v->a[142782] = state(3382);
	v->a[142783] = 1;
	v->a[142784] = aux_sym_concatenation_repeat1;
	v->a[142785] = state(3481);
	v->a[142786] = 1;
	v->a[142787] = aux_sym_case_item_repeat1;
	v->a[142788] = actions(8549);
	v->a[142789] = 2;
	v->a[142790] = sym__concat;
	v->a[142791] = aux_sym_concatenation_token1;
	v->a[142792] = 5;
	v->a[142793] = actions(17);
	v->a[142794] = 1;
	v->a[142795] = anon_sym_LPAREN;
	v->a[142796] = actions(21);
	v->a[142797] = 1;
	v->a[142798] = anon_sym_LBRACE;
	v->a[142799] = actions(57);
	small_parse_table_7140(v);
}

/* EOF small_parse_table_1427.c */
