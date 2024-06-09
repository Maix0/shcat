/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_808.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4040(t_small_parse_table_array *v)
{
	v->a[80800] = sym_expansion;
	v->a[80801] = sym_command_substitution;
	v->a[80802] = 12;
	v->a[80803] = actions(3);
	v->a[80804] = 1;
	v->a[80805] = sym_comment;
	v->a[80806] = actions(1479);
	v->a[80807] = 1;
	v->a[80808] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80809] = actions(1481);
	v->a[80810] = 1;
	v->a[80811] = anon_sym_DOLLAR;
	v->a[80812] = actions(1483);
	v->a[80813] = 1;
	v->a[80814] = anon_sym_DQUOTE;
	v->a[80815] = actions(1485);
	v->a[80816] = 1;
	v->a[80817] = aux_sym_number_token1;
	v->a[80818] = actions(1487);
	v->a[80819] = 1;
	small_parse_table_4041(v);
}

void	small_parse_table_4041(t_small_parse_table_array *v)
{
	v->a[80820] = aux_sym_number_token2;
	v->a[80821] = actions(1489);
	v->a[80822] = 1;
	v->a[80823] = anon_sym_DOLLAR_LBRACE;
	v->a[80824] = actions(1491);
	v->a[80825] = 1;
	v->a[80826] = anon_sym_DOLLAR_LPAREN;
	v->a[80827] = actions(1493);
	v->a[80828] = 1;
	v->a[80829] = anon_sym_BQUOTE;
	v->a[80830] = actions(1477);
	v->a[80831] = 2;
	v->a[80832] = sym_raw_string;
	v->a[80833] = sym_word;
	v->a[80834] = state(477);
	v->a[80835] = 2;
	v->a[80836] = sym_concatenation;
	v->a[80837] = aux_sym_for_statement_repeat1;
	v->a[80838] = state(832);
	v->a[80839] = 6;
	small_parse_table_4042(v);
}

void	small_parse_table_4042(t_small_parse_table_array *v)
{
	v->a[80840] = sym_arithmetic_expansion;
	v->a[80841] = sym_string;
	v->a[80842] = sym_number;
	v->a[80843] = sym_simple_expansion;
	v->a[80844] = sym_expansion;
	v->a[80845] = sym_command_substitution;
	v->a[80846] = 12;
	v->a[80847] = actions(3);
	v->a[80848] = 1;
	v->a[80849] = sym_comment;
	v->a[80850] = actions(1479);
	v->a[80851] = 1;
	v->a[80852] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80853] = actions(1481);
	v->a[80854] = 1;
	v->a[80855] = anon_sym_DOLLAR;
	v->a[80856] = actions(1483);
	v->a[80857] = 1;
	v->a[80858] = anon_sym_DQUOTE;
	v->a[80859] = actions(1485);
	small_parse_table_4043(v);
}

void	small_parse_table_4043(t_small_parse_table_array *v)
{
	v->a[80860] = 1;
	v->a[80861] = aux_sym_number_token1;
	v->a[80862] = actions(1487);
	v->a[80863] = 1;
	v->a[80864] = aux_sym_number_token2;
	v->a[80865] = actions(1489);
	v->a[80866] = 1;
	v->a[80867] = anon_sym_DOLLAR_LBRACE;
	v->a[80868] = actions(1491);
	v->a[80869] = 1;
	v->a[80870] = anon_sym_DOLLAR_LPAREN;
	v->a[80871] = actions(1493);
	v->a[80872] = 1;
	v->a[80873] = anon_sym_BQUOTE;
	v->a[80874] = actions(1477);
	v->a[80875] = 2;
	v->a[80876] = sym_raw_string;
	v->a[80877] = sym_word;
	v->a[80878] = state(437);
	v->a[80879] = 2;
	small_parse_table_4044(v);
}

void	small_parse_table_4044(t_small_parse_table_array *v)
{
	v->a[80880] = sym_concatenation;
	v->a[80881] = aux_sym_for_statement_repeat1;
	v->a[80882] = state(832);
	v->a[80883] = 6;
	v->a[80884] = sym_arithmetic_expansion;
	v->a[80885] = sym_string;
	v->a[80886] = sym_number;
	v->a[80887] = sym_simple_expansion;
	v->a[80888] = sym_expansion;
	v->a[80889] = sym_command_substitution;
	v->a[80890] = 12;
	v->a[80891] = actions(3);
	v->a[80892] = 1;
	v->a[80893] = sym_comment;
	v->a[80894] = actions(2119);
	v->a[80895] = 1;
	v->a[80896] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80897] = actions(2121);
	v->a[80898] = 1;
	v->a[80899] = anon_sym_DOLLAR;
	small_parse_table_4045(v);
}

/* EOF small_parse_table_808.c */
