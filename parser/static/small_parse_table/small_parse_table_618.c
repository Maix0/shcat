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
	v->a[61800] = sym_comment;
	v->a[61801] = actions(1946);
	v->a[61802] = 1;
	v->a[61803] = sym_file_descriptor;
	v->a[61804] = actions(1976);
	v->a[61805] = 1;
	v->a[61806] = aux_sym_heredoc_redirect_token1;
	v->a[61807] = actions(700);
	v->a[61808] = 2;
	v->a[61809] = anon_sym_LT_LT;
	v->a[61810] = anon_sym_LT_LT_DASH;
	v->a[61811] = state(1150);
	v->a[61812] = 3;
	v->a[61813] = sym_file_redirect;
	v->a[61814] = sym_heredoc_redirect;
	v->a[61815] = aux_sym_redirected_statement_repeat1;
	v->a[61816] = actions(1974);
	v->a[61817] = 6;
	v->a[61818] = anon_sym_PIPE;
	v->a[61819] = anon_sym_SEMI_SEMI;
	small_parse_table_3091(v);
}

void	small_parse_table_3091(t_small_parse_table_array *v)
{
	v->a[61820] = anon_sym_AMP_AMP;
	v->a[61821] = anon_sym_PIPE_PIPE;
	v->a[61822] = anon_sym_AMP;
	v->a[61823] = anon_sym_SEMI;
	v->a[61824] = actions(1942);
	v->a[61825] = 7;
	v->a[61826] = anon_sym_LT;
	v->a[61827] = anon_sym_GT;
	v->a[61828] = anon_sym_GT_GT;
	v->a[61829] = anon_sym_LT_AMP;
	v->a[61830] = anon_sym_GT_AMP;
	v->a[61831] = anon_sym_GT_PIPE;
	v->a[61832] = anon_sym_LT_GT;
	v->a[61833] = 3;
	v->a[61834] = actions(3);
	v->a[61835] = 1;
	v->a[61836] = sym_comment;
	v->a[61837] = actions(2141);
	v->a[61838] = 3;
	v->a[61839] = sym_file_descriptor;
	small_parse_table_3092(v);
}

void	small_parse_table_3092(t_small_parse_table_array *v)
{
	v->a[61840] = ts_builtin_sym_end;
	v->a[61841] = aux_sym_heredoc_redirect_token1;
	v->a[61842] = actions(2143);
	v->a[61843] = 17;
	v->a[61844] = anon_sym_PIPE;
	v->a[61845] = anon_sym_RPAREN;
	v->a[61846] = anon_sym_SEMI_SEMI;
	v->a[61847] = anon_sym_AMP_AMP;
	v->a[61848] = anon_sym_PIPE_PIPE;
	v->a[61849] = anon_sym_LT;
	v->a[61850] = anon_sym_GT;
	v->a[61851] = anon_sym_GT_GT;
	v->a[61852] = anon_sym_LT_AMP;
	v->a[61853] = anon_sym_GT_AMP;
	v->a[61854] = anon_sym_GT_PIPE;
	v->a[61855] = anon_sym_LT_GT;
	v->a[61856] = anon_sym_LT_LT;
	v->a[61857] = anon_sym_LT_LT_DASH;
	v->a[61858] = anon_sym_AMP;
	v->a[61859] = anon_sym_BQUOTE;
	small_parse_table_3093(v);
}

void	small_parse_table_3093(t_small_parse_table_array *v)
{
	v->a[61860] = anon_sym_SEMI;
	v->a[61861] = 5;
	v->a[61862] = actions(3);
	v->a[61863] = 1;
	v->a[61864] = sym_comment;
	v->a[61865] = actions(702);
	v->a[61866] = 1;
	v->a[61867] = sym_file_descriptor;
	v->a[61868] = actions(721);
	v->a[61869] = 1;
	v->a[61870] = sym_variable_name;
	v->a[61871] = state(1047);
	v->a[61872] = 2;
	v->a[61873] = sym_variable_assignment;
	v->a[61874] = aux_sym__variable_assignments_repeat1;
	v->a[61875] = actions(690);
	v->a[61876] = 16;
	v->a[61877] = anon_sym_LT;
	v->a[61878] = anon_sym_GT;
	v->a[61879] = anon_sym_GT_GT;
	small_parse_table_3094(v);
}

void	small_parse_table_3094(t_small_parse_table_array *v)
{
	v->a[61880] = anon_sym_LT_AMP;
	v->a[61881] = anon_sym_GT_AMP;
	v->a[61882] = anon_sym_GT_PIPE;
	v->a[61883] = anon_sym_LT_GT;
	v->a[61884] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61885] = anon_sym_DOLLAR;
	v->a[61886] = anon_sym_DQUOTE;
	v->a[61887] = sym_raw_string;
	v->a[61888] = sym_number;
	v->a[61889] = anon_sym_DOLLAR_LBRACE;
	v->a[61890] = anon_sym_DOLLAR_LPAREN;
	v->a[61891] = anon_sym_BQUOTE;
	v->a[61892] = sym_word;
	v->a[61893] = 5;
	v->a[61894] = actions(3);
	v->a[61895] = 1;
	v->a[61896] = sym_comment;
	v->a[61897] = actions(692);
	v->a[61898] = 1;
	v->a[61899] = anon_sym_PIPE;
	small_parse_table_3095(v);
}

/* EOF small_parse_table_618.c */
