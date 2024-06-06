/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_888.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4440(t_small_parse_table_array *v)
{
	v->a[88800] = 1;
	v->a[88801] = aux_sym__simple_variable_name_token1;
	v->a[88802] = actions(4905);
	v->a[88803] = 1;
	v->a[88804] = sym_variable_name;
	v->a[88805] = state(1476);
	v->a[88806] = 1;
	v->a[88807] = sym__arithmetic_postfix_expression;
	v->a[88808] = state(1478);
	v->a[88809] = 1;
	v->a[88810] = sym__arithmetic_unary_expression;
	v->a[88811] = state(1490);
	v->a[88812] = 1;
	v->a[88813] = sym__arithmetic_ternary_expression;
	v->a[88814] = state(1511);
	v->a[88815] = 1;
	v->a[88816] = sym__arithmetic_binary_expression;
	v->a[88817] = actions(4588);
	v->a[88818] = 2;
	v->a[88819] = anon_sym_PLUS_PLUS;
	small_parse_table_4441(v);
}

void	small_parse_table_4441(t_small_parse_table_array *v)
{
	v->a[88820] = anon_sym_DASH_DASH;
	v->a[88821] = actions(4590);
	v->a[88822] = 2;
	v->a[88823] = anon_sym_DASH2;
	v->a[88824] = anon_sym_PLUS2;
	v->a[88825] = state(1471);
	v->a[88826] = 8;
	v->a[88827] = sym__arithmetic_expression;
	v->a[88828] = sym__arithmetic_literal;
	v->a[88829] = sym__arithmetic_parenthesized_expression;
	v->a[88830] = sym_string;
	v->a[88831] = sym_number;
	v->a[88832] = sym_simple_expansion;
	v->a[88833] = sym_expansion;
	v->a[88834] = sym_command_substitution;
	v->a[88835] = 6;
	v->a[88836] = actions(3);
	v->a[88837] = 1;
	v->a[88838] = sym_comment;
	v->a[88839] = actions(4907);
	small_parse_table_4442(v);
}

void	small_parse_table_4442(t_small_parse_table_array *v)
{
	v->a[88840] = 1;
	v->a[88841] = aux_sym_concatenation_token1;
	v->a[88842] = actions(4909);
	v->a[88843] = 1;
	v->a[88844] = sym__concat;
	v->a[88845] = state(1855);
	v->a[88846] = 1;
	v->a[88847] = aux_sym_concatenation_repeat1;
	v->a[88848] = actions(2664);
	v->a[88849] = 3;
	v->a[88850] = sym_file_descriptor;
	v->a[88851] = sym_variable_name;
	v->a[88852] = aux_sym_heredoc_redirect_token1;
	v->a[88853] = actions(2662);
	v->a[88854] = 23;
	v->a[88855] = anon_sym_esac;
	v->a[88856] = anon_sym_PIPE;
	v->a[88857] = anon_sym_SEMI_SEMI;
	v->a[88858] = anon_sym_SEMI_AMP;
	v->a[88859] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_4443(v);
}

void	small_parse_table_4443(t_small_parse_table_array *v)
{
	v->a[88860] = anon_sym_PIPE_AMP;
	v->a[88861] = anon_sym_AMP_AMP;
	v->a[88862] = anon_sym_PIPE_PIPE;
	v->a[88863] = anon_sym_LT;
	v->a[88864] = anon_sym_GT;
	v->a[88865] = anon_sym_GT_GT;
	v->a[88866] = anon_sym_AMP_GT;
	v->a[88867] = anon_sym_AMP_GT_GT;
	v->a[88868] = anon_sym_LT_AMP;
	v->a[88869] = anon_sym_GT_AMP;
	v->a[88870] = anon_sym_GT_PIPE;
	v->a[88871] = anon_sym_LT_AMP_DASH;
	v->a[88872] = anon_sym_GT_AMP_DASH;
	v->a[88873] = anon_sym_LT_LT;
	v->a[88874] = anon_sym_LT_LT_DASH;
	v->a[88875] = anon_sym_AMP;
	v->a[88876] = sym__special_character;
	v->a[88877] = anon_sym_SEMI;
	v->a[88878] = 21;
	v->a[88879] = actions(57);
	small_parse_table_4444(v);
}

void	small_parse_table_4444(t_small_parse_table_array *v)
{
	v->a[88880] = 1;
	v->a[88881] = sym_comment;
	v->a[88882] = actions(4584);
	v->a[88883] = 1;
	v->a[88884] = anon_sym_LPAREN;
	v->a[88885] = actions(4586);
	v->a[88886] = 1;
	v->a[88887] = anon_sym_BANG;
	v->a[88888] = actions(4592);
	v->a[88889] = 1;
	v->a[88890] = anon_sym_TILDE;
	v->a[88891] = actions(4594);
	v->a[88892] = 1;
	v->a[88893] = anon_sym_DOLLAR;
	v->a[88894] = actions(4596);
	v->a[88895] = 1;
	v->a[88896] = anon_sym_DQUOTE;
	v->a[88897] = actions(4598);
	v->a[88898] = 1;
	v->a[88899] = aux_sym_number_token1;
	small_parse_table_4445(v);
}

/* EOF small_parse_table_888.c */
