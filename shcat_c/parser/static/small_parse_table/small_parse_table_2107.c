/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2107.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10535(t_small_parse_table_array *v)
{
	v->a[210700] = 1;
	v->a[210701] = aux_sym_number_token1;
	v->a[210702] = actions(2311);
	v->a[210703] = 1;
	v->a[210704] = aux_sym_number_token2;
	v->a[210705] = actions(2315);
	v->a[210706] = 1;
	v->a[210707] = anon_sym_DOLLAR_LPAREN;
	v->a[210708] = actions(2327);
	v->a[210709] = 1;
	v->a[210710] = sym__brace_start;
	v->a[210711] = actions(9982);
	v->a[210712] = 1;
	v->a[210713] = sym_word;
	v->a[210714] = actions(9986);
	v->a[210715] = 1;
	v->a[210716] = anon_sym_DOLLAR_LBRACK;
	v->a[210717] = actions(9988);
	v->a[210718] = 1;
	v->a[210719] = anon_sym_DOLLAR;
	small_parse_table_10536(v);
}

void	small_parse_table_10536(t_small_parse_table_array *v)
{
	v->a[210720] = actions(9992);
	v->a[210721] = 1;
	v->a[210722] = anon_sym_DQUOTE;
	v->a[210723] = actions(9996);
	v->a[210724] = 1;
	v->a[210725] = anon_sym_DOLLAR_LBRACE;
	v->a[210726] = actions(9998);
	v->a[210727] = 1;
	v->a[210728] = anon_sym_BQUOTE;
	v->a[210729] = actions(10000);
	v->a[210730] = 1;
	v->a[210731] = anon_sym_DOLLAR_BQUOTE;
	v->a[210732] = actions(10004);
	v->a[210733] = 1;
	v->a[210734] = sym__comment_word;
	v->a[210735] = actions(9984);
	v->a[210736] = 2;
	v->a[210737] = anon_sym_LPAREN_LPAREN;
	v->a[210738] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[210739] = actions(9990);
	small_parse_table_10537(v);
}

void	small_parse_table_10537(t_small_parse_table_array *v)
{
	v->a[210740] = 2;
	v->a[210741] = sym_test_operator;
	v->a[210742] = sym__special_character;
	v->a[210743] = actions(10002);
	v->a[210744] = 2;
	v->a[210745] = anon_sym_LT_LPAREN;
	v->a[210746] = anon_sym_GT_LPAREN;
	v->a[210747] = actions(9994);
	v->a[210748] = 3;
	v->a[210749] = sym__bare_dollar;
	v->a[210750] = sym_raw_string;
	v->a[210751] = sym_ansi_c_string;
	v->a[210752] = state(1423);
	v->a[210753] = 9;
	v->a[210754] = sym_arithmetic_expansion;
	v->a[210755] = sym_brace_expression;
	v->a[210756] = sym_string;
	v->a[210757] = sym_translated_string;
	v->a[210758] = sym_number;
	v->a[210759] = sym_simple_expansion;
	small_parse_table_10538(v);
}

void	small_parse_table_10538(t_small_parse_table_array *v)
{
	v->a[210760] = sym_expansion;
	v->a[210761] = sym_command_substitution;
	v->a[210762] = sym_process_substitution;
	v->a[210763] = 18;
	v->a[210764] = actions(3);
	v->a[210765] = 1;
	v->a[210766] = sym_comment;
	v->a[210767] = actions(5405);
	v->a[210768] = 1;
	v->a[210769] = anon_sym_DOLLAR_LBRACK;
	v->a[210770] = actions(5411);
	v->a[210771] = 1;
	v->a[210772] = anon_sym_DQUOTE;
	v->a[210773] = actions(5415);
	v->a[210774] = 1;
	v->a[210775] = aux_sym_number_token1;
	v->a[210776] = actions(5417);
	v->a[210777] = 1;
	v->a[210778] = aux_sym_number_token2;
	v->a[210779] = actions(5419);
	small_parse_table_10539(v);
}

void	small_parse_table_10539(t_small_parse_table_array *v)
{
	v->a[210780] = 1;
	v->a[210781] = anon_sym_DOLLAR_LBRACE;
	v->a[210782] = actions(5421);
	v->a[210783] = 1;
	v->a[210784] = anon_sym_DOLLAR_LPAREN;
	v->a[210785] = actions(5423);
	v->a[210786] = 1;
	v->a[210787] = anon_sym_BQUOTE;
	v->a[210788] = actions(5425);
	v->a[210789] = 1;
	v->a[210790] = anon_sym_DOLLAR_BQUOTE;
	v->a[210791] = actions(5431);
	v->a[210792] = 1;
	v->a[210793] = sym__brace_start;
	v->a[210794] = actions(9958);
	v->a[210795] = 1;
	v->a[210796] = sym_word;
	v->a[210797] = actions(9966);
	v->a[210798] = 1;
	v->a[210799] = sym__comment_word;
	small_parse_table_10540(v);
}

/* EOF small_parse_table_2107.c */
