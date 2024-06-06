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
	v->a[80800] = 1;
	v->a[80801] = aux_sym_number_token1;
	v->a[80802] = actions(4348);
	v->a[80803] = 1;
	v->a[80804] = aux_sym_number_token2;
	v->a[80805] = actions(4352);
	v->a[80806] = 1;
	v->a[80807] = anon_sym_DOLLAR_LPAREN;
	v->a[80808] = actions(4360);
	v->a[80809] = 1;
	v->a[80810] = sym_extglob_pattern;
	v->a[80811] = actions(4362);
	v->a[80812] = 1;
	v->a[80813] = sym__brace_start;
	v->a[80814] = actions(4548);
	v->a[80815] = 1;
	v->a[80816] = anon_sym_LPAREN;
	v->a[80817] = actions(4550);
	v->a[80818] = 1;
	v->a[80819] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4041(v);
}

void	small_parse_table_4041(t_small_parse_table_array *v)
{
	v->a[80820] = actions(4552);
	v->a[80821] = 1;
	v->a[80822] = sym__special_character;
	v->a[80823] = actions(4554);
	v->a[80824] = 1;
	v->a[80825] = anon_sym_DQUOTE;
	v->a[80826] = actions(4556);
	v->a[80827] = 1;
	v->a[80828] = anon_sym_DOLLAR_LBRACE;
	v->a[80829] = actions(4558);
	v->a[80830] = 1;
	v->a[80831] = anon_sym_BQUOTE;
	v->a[80832] = actions(4560);
	v->a[80833] = 1;
	v->a[80834] = anon_sym_DOLLAR_BQUOTE;
	v->a[80835] = actions(4566);
	v->a[80836] = 1;
	v->a[80837] = anon_sym_esac;
	v->a[80838] = state(3393);
	v->a[80839] = 1;
	small_parse_table_4042(v);
}

void	small_parse_table_4042(t_small_parse_table_array *v)
{
	v->a[80840] = aux_sym__literal_repeat1;
	v->a[80841] = state(3862);
	v->a[80842] = 1;
	v->a[80843] = sym_last_case_item;
	v->a[80844] = actions(4358);
	v->a[80845] = 2;
	v->a[80846] = sym_test_operator;
	v->a[80847] = sym_raw_string;
	v->a[80848] = state(1787);
	v->a[80849] = 2;
	v->a[80850] = sym_case_item;
	v->a[80851] = aux_sym_case_statement_repeat1;
	v->a[80852] = state(3472);
	v->a[80853] = 2;
	v->a[80854] = sym_concatenation;
	v->a[80855] = sym__extglob_blob;
	v->a[80856] = state(3295);
	v->a[80857] = 7;
	v->a[80858] = sym_arithmetic_expansion;
	v->a[80859] = sym_brace_expression;
	small_parse_table_4043(v);
}

void	small_parse_table_4043(t_small_parse_table_array *v)
{
	v->a[80860] = sym_string;
	v->a[80861] = sym_number;
	v->a[80862] = sym_simple_expansion;
	v->a[80863] = sym_expansion;
	v->a[80864] = sym_command_substitution;
	v->a[80865] = 22;
	v->a[80866] = actions(57);
	v->a[80867] = 1;
	v->a[80868] = sym_comment;
	v->a[80869] = actions(4328);
	v->a[80870] = 1;
	v->a[80871] = sym_word;
	v->a[80872] = actions(4340);
	v->a[80873] = 1;
	v->a[80874] = anon_sym_DOLLAR;
	v->a[80875] = actions(4346);
	v->a[80876] = 1;
	v->a[80877] = aux_sym_number_token1;
	v->a[80878] = actions(4348);
	v->a[80879] = 1;
	small_parse_table_4044(v);
}

void	small_parse_table_4044(t_small_parse_table_array *v)
{
	v->a[80880] = aux_sym_number_token2;
	v->a[80881] = actions(4352);
	v->a[80882] = 1;
	v->a[80883] = anon_sym_DOLLAR_LPAREN;
	v->a[80884] = actions(4360);
	v->a[80885] = 1;
	v->a[80886] = sym_extglob_pattern;
	v->a[80887] = actions(4362);
	v->a[80888] = 1;
	v->a[80889] = sym__brace_start;
	v->a[80890] = actions(4548);
	v->a[80891] = 1;
	v->a[80892] = anon_sym_LPAREN;
	v->a[80893] = actions(4550);
	v->a[80894] = 1;
	v->a[80895] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80896] = actions(4552);
	v->a[80897] = 1;
	v->a[80898] = sym__special_character;
	v->a[80899] = actions(4554);
	small_parse_table_4045(v);
}

/* EOF small_parse_table_808.c */
