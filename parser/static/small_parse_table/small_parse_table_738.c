/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_738.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3690(t_small_parse_table_array *v)
{
	v->a[73800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73801] = actions(4340);
	v->a[73802] = 1;
	v->a[73803] = anon_sym_DOLLAR;
	v->a[73804] = actions(4342);
	v->a[73805] = 1;
	v->a[73806] = sym__special_character;
	v->a[73807] = actions(4344);
	v->a[73808] = 1;
	v->a[73809] = anon_sym_DQUOTE;
	v->a[73810] = actions(4346);
	v->a[73811] = 1;
	v->a[73812] = aux_sym_number_token1;
	v->a[73813] = actions(4348);
	v->a[73814] = 1;
	v->a[73815] = aux_sym_number_token2;
	v->a[73816] = actions(4350);
	v->a[73817] = 1;
	v->a[73818] = anon_sym_DOLLAR_LBRACE;
	v->a[73819] = actions(4352);
	small_parse_table_3691(v);
}

void	small_parse_table_3691(t_small_parse_table_array *v)
{
	v->a[73820] = 1;
	v->a[73821] = anon_sym_DOLLAR_LPAREN;
	v->a[73822] = actions(4354);
	v->a[73823] = 1;
	v->a[73824] = anon_sym_BQUOTE;
	v->a[73825] = actions(4356);
	v->a[73826] = 1;
	v->a[73827] = anon_sym_DOLLAR_BQUOTE;
	v->a[73828] = actions(4358);
	v->a[73829] = 1;
	v->a[73830] = sym_test_operator;
	v->a[73831] = actions(4360);
	v->a[73832] = 1;
	v->a[73833] = sym_extglob_pattern;
	v->a[73834] = actions(4362);
	v->a[73835] = 1;
	v->a[73836] = sym__brace_start;
	v->a[73837] = actions(4420);
	v->a[73838] = 1;
	v->a[73839] = anon_sym_esac;
	small_parse_table_3692(v);
}

void	small_parse_table_3692(t_small_parse_table_array *v)
{
	v->a[73840] = actions(4424);
	v->a[73841] = 1;
	v->a[73842] = aux_sym_heredoc_redirect_token1;
	v->a[73843] = state(3393);
	v->a[73844] = 1;
	v->a[73845] = aux_sym__literal_repeat1;
	v->a[73846] = state(3952);
	v->a[73847] = 1;
	v->a[73848] = sym_last_case_item;
	v->a[73849] = actions(4328);
	v->a[73850] = 2;
	v->a[73851] = sym_raw_string;
	v->a[73852] = sym_word;
	v->a[73853] = state(1785);
	v->a[73854] = 2;
	v->a[73855] = sym_case_item;
	v->a[73856] = aux_sym_case_statement_repeat1;
	v->a[73857] = state(3472);
	v->a[73858] = 2;
	v->a[73859] = sym_concatenation;
	small_parse_table_3693(v);
}

void	small_parse_table_3693(t_small_parse_table_array *v)
{
	v->a[73860] = sym__extglob_blob;
	v->a[73861] = actions(4422);
	v->a[73862] = 3;
	v->a[73863] = anon_sym_SEMI_SEMI;
	v->a[73864] = anon_sym_AMP;
	v->a[73865] = anon_sym_SEMI;
	v->a[73866] = state(3295);
	v->a[73867] = 7;
	v->a[73868] = sym_arithmetic_expansion;
	v->a[73869] = sym_brace_expression;
	v->a[73870] = sym_string;
	v->a[73871] = sym_number;
	v->a[73872] = sym_simple_expansion;
	v->a[73873] = sym_expansion;
	v->a[73874] = sym_command_substitution;
	v->a[73875] = 3;
	v->a[73876] = actions(57);
	v->a[73877] = 1;
	v->a[73878] = sym_comment;
	v->a[73879] = actions(3048);
	small_parse_table_3694(v);
}

void	small_parse_table_3694(t_small_parse_table_array *v)
{
	v->a[73880] = 13;
	v->a[73881] = anon_sym_PIPE;
	v->a[73882] = anon_sym_LT;
	v->a[73883] = anon_sym_GT;
	v->a[73884] = anon_sym_AMP_GT;
	v->a[73885] = anon_sym_LT_AMP;
	v->a[73886] = anon_sym_GT_AMP;
	v->a[73887] = anon_sym_LT_LT;
	v->a[73888] = anon_sym_DOLLAR;
	v->a[73889] = aux_sym_number_token1;
	v->a[73890] = aux_sym_number_token2;
	v->a[73891] = anon_sym_DOLLAR_LPAREN;
	v->a[73892] = anon_sym_BQUOTE;
	v->a[73893] = sym_word;
	v->a[73894] = actions(3050);
	v->a[73895] = 21;
	v->a[73896] = sym_file_descriptor;
	v->a[73897] = sym__concat;
	v->a[73898] = sym_variable_name;
	v->a[73899] = sym_test_operator;
	small_parse_table_3695(v);
}

/* EOF small_parse_table_738.c */
