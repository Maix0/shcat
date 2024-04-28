/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1968.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9840(t_small_parse_table_array *v)
{
	v->a[196800] = sym_command_substitution;
	v->a[196801] = sym_process_substitution;
	v->a[196802] = 19;
	v->a[196803] = actions(3);
	v->a[196804] = 1;
	v->a[196805] = sym_comment;
	v->a[196806] = actions(363);
	v->a[196807] = 1;
	v->a[196808] = anon_sym_DOLLAR_LBRACK;
	v->a[196809] = actions(367);
	v->a[196810] = 1;
	v->a[196811] = anon_sym_DOLLAR;
	v->a[196812] = actions(371);
	v->a[196813] = 1;
	v->a[196814] = anon_sym_DQUOTE;
	v->a[196815] = actions(375);
	v->a[196816] = 1;
	v->a[196817] = aux_sym_number_token1;
	v->a[196818] = actions(377);
	v->a[196819] = 1;
	small_parse_table_9841(v);
}

void	small_parse_table_9841(t_small_parse_table_array *v)
{
	v->a[196820] = aux_sym_number_token2;
	v->a[196821] = actions(379);
	v->a[196822] = 1;
	v->a[196823] = anon_sym_DOLLAR_LBRACE;
	v->a[196824] = actions(381);
	v->a[196825] = 1;
	v->a[196826] = anon_sym_DOLLAR_LPAREN;
	v->a[196827] = actions(385);
	v->a[196828] = 1;
	v->a[196829] = anon_sym_DOLLAR_BQUOTE;
	v->a[196830] = actions(391);
	v->a[196831] = 1;
	v->a[196832] = sym__brace_start;
	v->a[196833] = actions(5809);
	v->a[196834] = 1;
	v->a[196835] = anon_sym_BQUOTE;
	v->a[196836] = actions(8836);
	v->a[196837] = 1;
	v->a[196838] = sym_word;
	v->a[196839] = actions(8838);
	small_parse_table_9842(v);
}

void	small_parse_table_9842(t_small_parse_table_array *v)
{
	v->a[196840] = 1;
	v->a[196841] = anon_sym_RBRACK;
	v->a[196842] = actions(8844);
	v->a[196843] = 1;
	v->a[196844] = sym_test_operator;
	v->a[196845] = actions(352);
	v->a[196846] = 2;
	v->a[196847] = anon_sym_LPAREN_LPAREN;
	v->a[196848] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[196849] = actions(387);
	v->a[196850] = 2;
	v->a[196851] = anon_sym_LT_LPAREN;
	v->a[196852] = anon_sym_GT_LPAREN;
	v->a[196853] = actions(8840);
	v->a[196854] = 2;
	v->a[196855] = sym__special_character;
	v->a[196856] = sym__comment_word;
	v->a[196857] = actions(8842);
	v->a[196858] = 3;
	v->a[196859] = sym__bare_dollar;
	small_parse_table_9843(v);
}

void	small_parse_table_9843(t_small_parse_table_array *v)
{
	v->a[196860] = sym_raw_string;
	v->a[196861] = sym_ansi_c_string;
	v->a[196862] = state(2730);
	v->a[196863] = 9;
	v->a[196864] = sym_arithmetic_expansion;
	v->a[196865] = sym_brace_expression;
	v->a[196866] = sym_string;
	v->a[196867] = sym_translated_string;
	v->a[196868] = sym_number;
	v->a[196869] = sym_simple_expansion;
	v->a[196870] = sym_expansion;
	v->a[196871] = sym_command_substitution;
	v->a[196872] = sym_process_substitution;
	v->a[196873] = 19;
	v->a[196874] = actions(3);
	v->a[196875] = 1;
	v->a[196876] = sym_comment;
	v->a[196877] = actions(363);
	v->a[196878] = 1;
	v->a[196879] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_9844(v);
}

void	small_parse_table_9844(t_small_parse_table_array *v)
{
	v->a[196880] = actions(367);
	v->a[196881] = 1;
	v->a[196882] = anon_sym_DOLLAR;
	v->a[196883] = actions(371);
	v->a[196884] = 1;
	v->a[196885] = anon_sym_DQUOTE;
	v->a[196886] = actions(375);
	v->a[196887] = 1;
	v->a[196888] = aux_sym_number_token1;
	v->a[196889] = actions(377);
	v->a[196890] = 1;
	v->a[196891] = aux_sym_number_token2;
	v->a[196892] = actions(379);
	v->a[196893] = 1;
	v->a[196894] = anon_sym_DOLLAR_LBRACE;
	v->a[196895] = actions(381);
	v->a[196896] = 1;
	v->a[196897] = anon_sym_DOLLAR_LPAREN;
	v->a[196898] = actions(385);
	v->a[196899] = 1;
	small_parse_table_9845(v);
}

/* EOF small_parse_table_1968.c */
