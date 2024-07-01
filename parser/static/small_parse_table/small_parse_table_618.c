/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_618.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3090(t_small_parse_table_array *v)
{
	v->a[61800] = sym_file_descriptor;
	v->a[61801] = actions(1524);
	v->a[61802] = 1;
	v->a[61803] = sym_variable_name;
	v->a[61804] = state(1382);
	v->a[61805] = 2;
	v->a[61806] = sym_variable_assignment;
	v->a[61807] = aux_sym__variable_assignments_repeat1;
	v->a[61808] = actions(734);
	v->a[61809] = 16;
	v->a[61810] = anon_sym_LT;
	v->a[61811] = anon_sym_GT;
	v->a[61812] = anon_sym_GT_GT;
	v->a[61813] = anon_sym_LT_AMP;
	v->a[61814] = anon_sym_GT_AMP;
	v->a[61815] = anon_sym_GT_PIPE;
	v->a[61816] = anon_sym_LT_GT;
	v->a[61817] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61818] = anon_sym_DOLLAR;
	v->a[61819] = anon_sym_DQUOTE;
	small_parse_table_3091(v);
}

void	small_parse_table_3091(t_small_parse_table_array *v)
{
	v->a[61820] = sym_raw_string;
	v->a[61821] = sym_number;
	v->a[61822] = anon_sym_DOLLAR_LBRACE;
	v->a[61823] = anon_sym_DOLLAR_LPAREN;
	v->a[61824] = anon_sym_BQUOTE;
	v->a[61825] = sym_word;
	v->a[61826] = 14;
	v->a[61827] = actions(3);
	v->a[61828] = 1;
	v->a[61829] = sym_comment;
	v->a[61830] = actions(2122);
	v->a[61831] = 1;
	v->a[61832] = anon_sym_LPAREN;
	v->a[61833] = actions(2125);
	v->a[61834] = 1;
	v->a[61835] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61836] = actions(2128);
	v->a[61837] = 1;
	v->a[61838] = anon_sym_DOLLAR;
	v->a[61839] = actions(2131);
	small_parse_table_3092(v);
}

void	small_parse_table_3092(t_small_parse_table_array *v)
{
	v->a[61840] = 1;
	v->a[61841] = anon_sym_DQUOTE;
	v->a[61842] = actions(2134);
	v->a[61843] = 1;
	v->a[61844] = anon_sym_DOLLAR_LBRACE;
	v->a[61845] = actions(2137);
	v->a[61846] = 1;
	v->a[61847] = anon_sym_DOLLAR_LPAREN;
	v->a[61848] = actions(2140);
	v->a[61849] = 1;
	v->a[61850] = anon_sym_BQUOTE;
	v->a[61851] = actions(2143);
	v->a[61852] = 1;
	v->a[61853] = sym_extglob_pattern;
	v->a[61854] = state(1139);
	v->a[61855] = 1;
	v->a[61856] = aux_sym_case_statement_repeat1;
	v->a[61857] = state(1713);
	v->a[61858] = 1;
	v->a[61859] = sym_case_item;
	small_parse_table_3093(v);
}

void	small_parse_table_3093(t_small_parse_table_array *v)
{
	v->a[61860] = state(1886);
	v->a[61861] = 2;
	v->a[61862] = sym_concatenation;
	v->a[61863] = sym__extglob_blob;
	v->a[61864] = actions(2119);
	v->a[61865] = 3;
	v->a[61866] = sym_raw_string;
	v->a[61867] = sym_number;
	v->a[61868] = sym_word;
	v->a[61869] = state(1785);
	v->a[61870] = 5;
	v->a[61871] = sym_arithmetic_expansion;
	v->a[61872] = sym_string;
	v->a[61873] = sym_simple_expansion;
	v->a[61874] = sym_expansion;
	v->a[61875] = sym_command_substitution;
	v->a[61876] = 3;
	v->a[61877] = actions(3);
	v->a[61878] = 1;
	v->a[61879] = sym_comment;
	small_parse_table_3094(v);
}

void	small_parse_table_3094(t_small_parse_table_array *v)
{
	v->a[61880] = actions(2146);
	v->a[61881] = 3;
	v->a[61882] = sym_file_descriptor;
	v->a[61883] = ts_builtin_sym_end;
	v->a[61884] = aux_sym_heredoc_redirect_token1;
	v->a[61885] = actions(2148);
	v->a[61886] = 17;
	v->a[61887] = anon_sym_PIPE;
	v->a[61888] = anon_sym_RPAREN;
	v->a[61889] = anon_sym_SEMI_SEMI;
	v->a[61890] = anon_sym_AMP_AMP;
	v->a[61891] = anon_sym_PIPE_PIPE;
	v->a[61892] = anon_sym_LT;
	v->a[61893] = anon_sym_GT;
	v->a[61894] = anon_sym_GT_GT;
	v->a[61895] = anon_sym_LT_AMP;
	v->a[61896] = anon_sym_GT_AMP;
	v->a[61897] = anon_sym_GT_PIPE;
	v->a[61898] = anon_sym_LT_GT;
	v->a[61899] = anon_sym_LT_LT;
	small_parse_table_3095(v);
}

/* EOF small_parse_table_618.c */
