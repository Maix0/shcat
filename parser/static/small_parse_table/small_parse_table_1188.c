/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1188.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5940(t_small_parse_table_array *v)
{
	v->a[118800] = sym_comment;
	v->a[118801] = state(2293);
	v->a[118802] = 1;
	v->a[118803] = aux_sym_concatenation_repeat1;
	v->a[118804] = actions(6441);
	v->a[118805] = 2;
	v->a[118806] = sym__concat;
	v->a[118807] = aux_sym_concatenation_token1;
	v->a[118808] = actions(5389);
	v->a[118809] = 14;
	v->a[118810] = anon_sym_PIPE;
	v->a[118811] = anon_sym_LT;
	v->a[118812] = anon_sym_GT;
	v->a[118813] = anon_sym_LT_LT;
	v->a[118814] = anon_sym_AMP_GT;
	v->a[118815] = anon_sym_LT_AMP;
	v->a[118816] = anon_sym_GT_AMP;
	v->a[118817] = anon_sym_DOLLAR;
	v->a[118818] = sym__special_character;
	v->a[118819] = aux_sym_number_token1;
	small_parse_table_5941(v);
}

void	small_parse_table_5941(t_small_parse_table_array *v)
{
	v->a[118820] = aux_sym_number_token2;
	v->a[118821] = anon_sym_DOLLAR_LPAREN;
	v->a[118822] = anon_sym_BQUOTE;
	v->a[118823] = sym_word;
	v->a[118824] = actions(5391);
	v->a[118825] = 25;
	v->a[118826] = sym_file_descriptor;
	v->a[118827] = sym_variable_name;
	v->a[118828] = sym_test_operator;
	v->a[118829] = sym__brace_start;
	v->a[118830] = anon_sym_LPAREN_LPAREN;
	v->a[118831] = anon_sym_PIPE_PIPE;
	v->a[118832] = anon_sym_AMP_AMP;
	v->a[118833] = anon_sym_GT_GT;
	v->a[118834] = anon_sym_PIPE_AMP;
	v->a[118835] = anon_sym_RBRACK;
	v->a[118836] = anon_sym_AMP_GT_GT;
	v->a[118837] = anon_sym_GT_PIPE;
	v->a[118838] = anon_sym_LT_AMP_DASH;
	v->a[118839] = anon_sym_GT_AMP_DASH;
	small_parse_table_5942(v);
}

void	small_parse_table_5942(t_small_parse_table_array *v)
{
	v->a[118840] = anon_sym_LT_LT_DASH;
	v->a[118841] = anon_sym_LT_LT_LT;
	v->a[118842] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118843] = anon_sym_DOLLAR_LBRACK;
	v->a[118844] = anon_sym_DQUOTE;
	v->a[118845] = sym_raw_string;
	v->a[118846] = sym_ansi_c_string;
	v->a[118847] = anon_sym_DOLLAR_LBRACE;
	v->a[118848] = anon_sym_DOLLAR_BQUOTE;
	v->a[118849] = anon_sym_LT_LPAREN;
	v->a[118850] = anon_sym_GT_LPAREN;
	v->a[118851] = 7;
	v->a[118852] = actions(3);
	v->a[118853] = 1;
	v->a[118854] = sym_comment;
	v->a[118855] = actions(5826);
	v->a[118856] = 1;
	v->a[118857] = aux_sym_heredoc_redirect_token1;
	v->a[118858] = actions(5828);
	v->a[118859] = 1;
	small_parse_table_5943(v);
}

void	small_parse_table_5943(t_small_parse_table_array *v)
{
	v->a[118860] = sym_file_descriptor;
	v->a[118861] = actions(5831);
	v->a[118862] = 3;
	v->a[118863] = sym_variable_name;
	v->a[118864] = sym_test_operator;
	v->a[118865] = sym__brace_start;
	v->a[118866] = actions(5821);
	v->a[118867] = 9;
	v->a[118868] = anon_sym_SEMI;
	v->a[118869] = anon_sym_PIPE_PIPE;
	v->a[118870] = anon_sym_AMP_AMP;
	v->a[118871] = anon_sym_PIPE;
	v->a[118872] = anon_sym_AMP;
	v->a[118873] = anon_sym_LT_LT;
	v->a[118874] = anon_sym_SEMI_SEMI;
	v->a[118875] = anon_sym_PIPE_AMP;
	v->a[118876] = anon_sym_LT_LT_DASH;
	v->a[118877] = actions(5823);
	v->a[118878] = 12;
	v->a[118879] = anon_sym_LT;
	small_parse_table_5944(v);
}

void	small_parse_table_5944(t_small_parse_table_array *v)
{
	v->a[118880] = anon_sym_GT;
	v->a[118881] = anon_sym_GT_GT;
	v->a[118882] = anon_sym_AMP_GT;
	v->a[118883] = anon_sym_AMP_GT_GT;
	v->a[118884] = anon_sym_LT_AMP;
	v->a[118885] = anon_sym_GT_AMP;
	v->a[118886] = anon_sym_GT_PIPE;
	v->a[118887] = anon_sym_LT_AMP_DASH;
	v->a[118888] = anon_sym_GT_AMP_DASH;
	v->a[118889] = anon_sym_LT_LT_LT;
	v->a[118890] = anon_sym_BQUOTE;
	v->a[118891] = actions(5819);
	v->a[118892] = 16;
	v->a[118893] = anon_sym_LPAREN_LPAREN;
	v->a[118894] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118895] = anon_sym_DOLLAR_LBRACK;
	v->a[118896] = anon_sym_DOLLAR;
	v->a[118897] = sym__special_character;
	v->a[118898] = anon_sym_DQUOTE;
	v->a[118899] = sym_raw_string;
	small_parse_table_5945(v);
}

/* EOF small_parse_table_1188.c */
