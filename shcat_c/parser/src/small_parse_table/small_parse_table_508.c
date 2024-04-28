/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_508.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2540(t_small_parse_table_array *v)
{
	v->a[50800] = sym__special_character;
	v->a[50801] = anon_sym_DQUOTE;
	v->a[50802] = sym_raw_string;
	v->a[50803] = sym_ansi_c_string;
	v->a[50804] = aux_sym_number_token1;
	v->a[50805] = aux_sym_number_token2;
	v->a[50806] = anon_sym_DOLLAR_LBRACE;
	v->a[50807] = anon_sym_DOLLAR_LPAREN;
	v->a[50808] = anon_sym_BQUOTE;
	v->a[50809] = anon_sym_DOLLAR_BQUOTE;
	v->a[50810] = anon_sym_LT_LPAREN;
	v->a[50811] = anon_sym_GT_LPAREN;
	v->a[50812] = sym_word;
	v->a[50813] = 22;
	v->a[50814] = actions(71);
	v->a[50815] = 1;
	v->a[50816] = sym_comment;
	v->a[50817] = actions(5405);
	v->a[50818] = 1;
	v->a[50819] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_2541(v);
}

void	small_parse_table_2541(t_small_parse_table_array *v)
{
	v->a[50820] = actions(5407);
	v->a[50821] = 1;
	v->a[50822] = anon_sym_DOLLAR;
	v->a[50823] = actions(5409);
	v->a[50824] = 1;
	v->a[50825] = sym__special_character;
	v->a[50826] = actions(5411);
	v->a[50827] = 1;
	v->a[50828] = anon_sym_DQUOTE;
	v->a[50829] = actions(5415);
	v->a[50830] = 1;
	v->a[50831] = aux_sym_number_token1;
	v->a[50832] = actions(5417);
	v->a[50833] = 1;
	v->a[50834] = aux_sym_number_token2;
	v->a[50835] = actions(5419);
	v->a[50836] = 1;
	v->a[50837] = anon_sym_DOLLAR_LBRACE;
	v->a[50838] = actions(5421);
	v->a[50839] = 1;
	small_parse_table_2542(v);
}

void	small_parse_table_2542(t_small_parse_table_array *v)
{
	v->a[50840] = anon_sym_DOLLAR_LPAREN;
	v->a[50841] = actions(5423);
	v->a[50842] = 1;
	v->a[50843] = anon_sym_BQUOTE;
	v->a[50844] = actions(5425);
	v->a[50845] = 1;
	v->a[50846] = anon_sym_DOLLAR_BQUOTE;
	v->a[50847] = actions(5431);
	v->a[50848] = 1;
	v->a[50849] = sym__brace_start;
	v->a[50850] = actions(5451);
	v->a[50851] = 1;
	v->a[50852] = sym_word;
	v->a[50853] = actions(5455);
	v->a[50854] = 1;
	v->a[50855] = sym_test_operator;
	v->a[50856] = state(5519);
	v->a[50857] = 1;
	v->a[50858] = aux_sym__literal_repeat1;
	v->a[50859] = state(5619);
	small_parse_table_2543(v);
}

void	small_parse_table_2543(t_small_parse_table_array *v)
{
	v->a[50860] = 1;
	v->a[50861] = sym_concatenation;
	v->a[50862] = actions(5403);
	v->a[50863] = 2;
	v->a[50864] = anon_sym_LPAREN_LPAREN;
	v->a[50865] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50866] = actions(5427);
	v->a[50867] = 2;
	v->a[50868] = anon_sym_LT_LPAREN;
	v->a[50869] = anon_sym_GT_LPAREN;
	v->a[50870] = actions(5453);
	v->a[50871] = 2;
	v->a[50872] = sym_raw_string;
	v->a[50873] = sym_ansi_c_string;
	v->a[50874] = actions(2494);
	v->a[50875] = 7;
	v->a[50876] = anon_sym_PIPE;
	v->a[50877] = anon_sym_LT;
	v->a[50878] = anon_sym_GT;
	v->a[50879] = anon_sym_LT_LT;
	small_parse_table_2544(v);
}

void	small_parse_table_2544(t_small_parse_table_array *v)
{
	v->a[50880] = anon_sym_AMP_GT;
	v->a[50881] = anon_sym_LT_AMP;
	v->a[50882] = anon_sym_GT_AMP;
	v->a[50883] = state(5427);
	v->a[50884] = 9;
	v->a[50885] = sym_arithmetic_expansion;
	v->a[50886] = sym_brace_expression;
	v->a[50887] = sym_string;
	v->a[50888] = sym_translated_string;
	v->a[50889] = sym_number;
	v->a[50890] = sym_simple_expansion;
	v->a[50891] = sym_expansion;
	v->a[50892] = sym_command_substitution;
	v->a[50893] = sym_process_substitution;
	v->a[50894] = actions(2496);
	v->a[50895] = 10;
	v->a[50896] = sym_file_descriptor;
	v->a[50897] = anon_sym_PIPE_PIPE;
	v->a[50898] = anon_sym_AMP_AMP;
	v->a[50899] = anon_sym_GT_GT;
	small_parse_table_2545(v);
}

/* EOF small_parse_table_508.c */
