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
	v->a[61800] = anon_sym_PIPE;
	v->a[61801] = actions(2031);
	v->a[61802] = 1;
	v->a[61803] = aux_sym_heredoc_redirect_token1;
	v->a[61804] = actions(2033);
	v->a[61805] = 1;
	v->a[61806] = sym_file_descriptor;
	v->a[61807] = state(840);
	v->a[61808] = 1;
	v->a[61809] = sym_terminator;
	v->a[61810] = actions(804);
	v->a[61811] = 2;
	v->a[61812] = anon_sym_LT_LT;
	v->a[61813] = anon_sym_LT_LT_DASH;
	v->a[61814] = actions(842);
	v->a[61815] = 2;
	v->a[61816] = anon_sym_AMP_AMP;
	v->a[61817] = anon_sym_PIPE_PIPE;
	v->a[61818] = actions(2029);
	v->a[61819] = 2;
	small_parse_table_3091(v);
}

void	small_parse_table_3091(t_small_parse_table_array *v)
{
	v->a[61820] = anon_sym_LT_AMP_DASH;
	v->a[61821] = anon_sym_GT_AMP_DASH;
	v->a[61822] = actions(800);
	v->a[61823] = 3;
	v->a[61824] = anon_sym_SEMI_SEMI;
	v->a[61825] = anon_sym_AMP;
	v->a[61826] = anon_sym_SEMI;
	v->a[61827] = state(1157);
	v->a[61828] = 3;
	v->a[61829] = sym_file_redirect;
	v->a[61830] = sym_heredoc_redirect;
	v->a[61831] = aux_sym_redirected_statement_repeat1;
	v->a[61832] = actions(2027);
	v->a[61833] = 8;
	v->a[61834] = anon_sym_LT;
	v->a[61835] = anon_sym_GT;
	v->a[61836] = anon_sym_GT_GT;
	v->a[61837] = anon_sym_AMP_GT;
	v->a[61838] = anon_sym_AMP_GT_GT;
	v->a[61839] = anon_sym_LT_AMP;
	small_parse_table_3092(v);
}

void	small_parse_table_3092(t_small_parse_table_array *v)
{
	v->a[61840] = anon_sym_GT_AMP;
	v->a[61841] = anon_sym_GT_PIPE;
	v->a[61842] = 3;
	v->a[61843] = actions(3);
	v->a[61844] = 1;
	v->a[61845] = sym_comment;
	v->a[61846] = actions(1070);
	v->a[61847] = 2;
	v->a[61848] = sym_file_descriptor;
	v->a[61849] = sym__concat;
	v->a[61850] = actions(1072);
	v->a[61851] = 23;
	v->a[61852] = anon_sym_AMP_AMP;
	v->a[61853] = anon_sym_PIPE_PIPE;
	v->a[61854] = anon_sym_LT;
	v->a[61855] = anon_sym_GT;
	v->a[61856] = anon_sym_GT_GT;
	v->a[61857] = anon_sym_AMP_GT;
	v->a[61858] = anon_sym_AMP_GT_GT;
	v->a[61859] = anon_sym_LT_AMP;
	small_parse_table_3093(v);
}

void	small_parse_table_3093(t_small_parse_table_array *v)
{
	v->a[61860] = anon_sym_GT_AMP;
	v->a[61861] = anon_sym_GT_PIPE;
	v->a[61862] = anon_sym_LT_AMP_DASH;
	v->a[61863] = anon_sym_GT_AMP_DASH;
	v->a[61864] = aux_sym_heredoc_redirect_token1;
	v->a[61865] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61866] = aux_sym_concatenation_token1;
	v->a[61867] = anon_sym_DOLLAR;
	v->a[61868] = anon_sym_DQUOTE;
	v->a[61869] = sym_raw_string;
	v->a[61870] = sym_number;
	v->a[61871] = anon_sym_DOLLAR_LBRACE;
	v->a[61872] = anon_sym_DOLLAR_LPAREN;
	v->a[61873] = anon_sym_BQUOTE;
	v->a[61874] = sym_word;
	v->a[61875] = 3;
	v->a[61876] = actions(3);
	v->a[61877] = 1;
	v->a[61878] = sym_comment;
	v->a[61879] = actions(1088);
	small_parse_table_3094(v);
}

void	small_parse_table_3094(t_small_parse_table_array *v)
{
	v->a[61880] = 2;
	v->a[61881] = sym_file_descriptor;
	v->a[61882] = sym__concat;
	v->a[61883] = actions(1086);
	v->a[61884] = 23;
	v->a[61885] = anon_sym_AMP_AMP;
	v->a[61886] = anon_sym_PIPE_PIPE;
	v->a[61887] = anon_sym_LT;
	v->a[61888] = anon_sym_GT;
	v->a[61889] = anon_sym_GT_GT;
	v->a[61890] = anon_sym_AMP_GT;
	v->a[61891] = anon_sym_AMP_GT_GT;
	v->a[61892] = anon_sym_LT_AMP;
	v->a[61893] = anon_sym_GT_AMP;
	v->a[61894] = anon_sym_GT_PIPE;
	v->a[61895] = anon_sym_LT_AMP_DASH;
	v->a[61896] = anon_sym_GT_AMP_DASH;
	v->a[61897] = aux_sym_heredoc_redirect_token1;
	v->a[61898] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61899] = aux_sym_concatenation_token1;
	small_parse_table_3095(v);
}

/* EOF small_parse_table_618.c */
