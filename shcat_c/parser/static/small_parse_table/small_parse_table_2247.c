/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2247.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11235(t_small_parse_table_array *v)
{
	v->a[224700] = aux_sym_number_token2;
	v->a[224701] = actions(8192);
	v->a[224702] = 1;
	v->a[224703] = anon_sym_DOLLAR_LBRACE;
	v->a[224704] = actions(8194);
	v->a[224705] = 1;
	v->a[224706] = anon_sym_DOLLAR_LPAREN;
	v->a[224707] = actions(8196);
	v->a[224708] = 1;
	v->a[224709] = anon_sym_BQUOTE;
	v->a[224710] = actions(8198);
	v->a[224711] = 1;
	v->a[224712] = anon_sym_DOLLAR_BQUOTE;
	v->a[224713] = actions(8208);
	v->a[224714] = 1;
	v->a[224715] = sym__brace_start;
	v->a[224716] = actions(9720);
	v->a[224717] = 1;
	v->a[224718] = sym_word;
	v->a[224719] = actions(9728);
	small_parse_table_11236(v);
}

void	small_parse_table_11236(t_small_parse_table_array *v)
{
	v->a[224720] = 1;
	v->a[224721] = sym__comment_word;
	v->a[224722] = actions(10692);
	v->a[224723] = 1;
	v->a[224724] = anon_sym_DOLLAR;
	v->a[224725] = actions(8174);
	v->a[224726] = 2;
	v->a[224727] = anon_sym_LPAREN_LPAREN;
	v->a[224728] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[224729] = actions(8200);
	v->a[224730] = 2;
	v->a[224731] = anon_sym_LT_LPAREN;
	v->a[224732] = anon_sym_GT_LPAREN;
	v->a[224733] = actions(9724);
	v->a[224734] = 2;
	v->a[224735] = sym_test_operator;
	v->a[224736] = sym__special_character;
	v->a[224737] = actions(9726);
	v->a[224738] = 3;
	v->a[224739] = sym__bare_dollar;
	small_parse_table_11237(v);
}

void	small_parse_table_11237(t_small_parse_table_array *v)
{
	v->a[224740] = sym_raw_string;
	v->a[224741] = sym_ansi_c_string;
	v->a[224742] = state(1590);
	v->a[224743] = 9;
	v->a[224744] = sym_arithmetic_expansion;
	v->a[224745] = sym_brace_expression;
	v->a[224746] = sym_string;
	v->a[224747] = sym_translated_string;
	v->a[224748] = sym_number;
	v->a[224749] = sym_simple_expansion;
	v->a[224750] = sym_expansion;
	v->a[224751] = sym_command_substitution;
	v->a[224752] = sym_process_substitution;
	v->a[224753] = 18;
	v->a[224754] = actions(3);
	v->a[224755] = 1;
	v->a[224756] = sym_comment;
	v->a[224757] = actions(8178);
	v->a[224758] = 1;
	v->a[224759] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11238(v);
}

void	small_parse_table_11238(t_small_parse_table_array *v)
{
	v->a[224760] = actions(8184);
	v->a[224761] = 1;
	v->a[224762] = anon_sym_DQUOTE;
	v->a[224763] = actions(8188);
	v->a[224764] = 1;
	v->a[224765] = aux_sym_number_token1;
	v->a[224766] = actions(8190);
	v->a[224767] = 1;
	v->a[224768] = aux_sym_number_token2;
	v->a[224769] = actions(8192);
	v->a[224770] = 1;
	v->a[224771] = anon_sym_DOLLAR_LBRACE;
	v->a[224772] = actions(8194);
	v->a[224773] = 1;
	v->a[224774] = anon_sym_DOLLAR_LPAREN;
	v->a[224775] = actions(8196);
	v->a[224776] = 1;
	v->a[224777] = anon_sym_BQUOTE;
	v->a[224778] = actions(8198);
	v->a[224779] = 1;
	small_parse_table_11239(v);
}

void	small_parse_table_11239(t_small_parse_table_array *v)
{
	v->a[224780] = anon_sym_DOLLAR_BQUOTE;
	v->a[224781] = actions(8208);
	v->a[224782] = 1;
	v->a[224783] = sym__brace_start;
	v->a[224784] = actions(9720);
	v->a[224785] = 1;
	v->a[224786] = sym_word;
	v->a[224787] = actions(9728);
	v->a[224788] = 1;
	v->a[224789] = sym__comment_word;
	v->a[224790] = actions(10694);
	v->a[224791] = 1;
	v->a[224792] = anon_sym_DOLLAR;
	v->a[224793] = actions(8174);
	v->a[224794] = 2;
	v->a[224795] = anon_sym_LPAREN_LPAREN;
	v->a[224796] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[224797] = actions(8200);
	v->a[224798] = 2;
	v->a[224799] = anon_sym_LT_LPAREN;
	small_parse_table_11240(v);
}

/* EOF small_parse_table_2247.c */
