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
	v->a[61800] = anon_sym_LT;
	v->a[61801] = anon_sym_GT;
	v->a[61802] = anon_sym_GT_GT;
	v->a[61803] = anon_sym_LT_AMP;
	v->a[61804] = anon_sym_GT_AMP;
	v->a[61805] = anon_sym_GT_PIPE;
	v->a[61806] = 12;
	v->a[61807] = actions(3);
	v->a[61808] = 1;
	v->a[61809] = sym_comment;
	v->a[61810] = actions(682);
	v->a[61811] = 1;
	v->a[61812] = anon_sym_PIPE;
	v->a[61813] = actions(695);
	v->a[61814] = 1;
	v->a[61815] = anon_sym_RPAREN;
	v->a[61816] = actions(2009);
	v->a[61817] = 1;
	v->a[61818] = aux_sym_heredoc_redirect_token1;
	v->a[61819] = actions(2011);
	small_parse_table_3091(v);
}

void	small_parse_table_3091(t_small_parse_table_array *v)
{
	v->a[61820] = 1;
	v->a[61821] = sym_file_descriptor;
	v->a[61822] = state(746);
	v->a[61823] = 1;
	v->a[61824] = sym_terminator;
	v->a[61825] = actions(752);
	v->a[61826] = 2;
	v->a[61827] = anon_sym_AMP_AMP;
	v->a[61828] = anon_sym_PIPE_PIPE;
	v->a[61829] = actions(754);
	v->a[61830] = 2;
	v->a[61831] = anon_sym_LT_LT;
	v->a[61832] = anon_sym_LT_LT_DASH;
	v->a[61833] = actions(2007);
	v->a[61834] = 2;
	v->a[61835] = anon_sym_LT_AMP_DASH;
	v->a[61836] = anon_sym_GT_AMP_DASH;
	v->a[61837] = actions(750);
	v->a[61838] = 3;
	v->a[61839] = anon_sym_SEMI_SEMI;
	small_parse_table_3092(v);
}

void	small_parse_table_3092(t_small_parse_table_array *v)
{
	v->a[61840] = anon_sym_AMP;
	v->a[61841] = anon_sym_SEMI;
	v->a[61842] = state(1128);
	v->a[61843] = 3;
	v->a[61844] = sym_file_redirect;
	v->a[61845] = sym_heredoc_redirect;
	v->a[61846] = aux_sym_redirected_statement_repeat1;
	v->a[61847] = actions(2005);
	v->a[61848] = 6;
	v->a[61849] = anon_sym_LT;
	v->a[61850] = anon_sym_GT;
	v->a[61851] = anon_sym_GT_GT;
	v->a[61852] = anon_sym_LT_AMP;
	v->a[61853] = anon_sym_GT_AMP;
	v->a[61854] = anon_sym_GT_PIPE;
	v->a[61855] = 12;
	v->a[61856] = actions(3);
	v->a[61857] = 1;
	v->a[61858] = sym_comment;
	v->a[61859] = actions(682);
	small_parse_table_3093(v);
}

void	small_parse_table_3093(t_small_parse_table_array *v)
{
	v->a[61860] = 1;
	v->a[61861] = anon_sym_PIPE;
	v->a[61862] = actions(695);
	v->a[61863] = 1;
	v->a[61864] = anon_sym_RPAREN;
	v->a[61865] = actions(2009);
	v->a[61866] = 1;
	v->a[61867] = aux_sym_heredoc_redirect_token1;
	v->a[61868] = actions(2011);
	v->a[61869] = 1;
	v->a[61870] = sym_file_descriptor;
	v->a[61871] = state(745);
	v->a[61872] = 1;
	v->a[61873] = sym_terminator;
	v->a[61874] = actions(752);
	v->a[61875] = 2;
	v->a[61876] = anon_sym_AMP_AMP;
	v->a[61877] = anon_sym_PIPE_PIPE;
	v->a[61878] = actions(754);
	v->a[61879] = 2;
	small_parse_table_3094(v);
}

void	small_parse_table_3094(t_small_parse_table_array *v)
{
	v->a[61880] = anon_sym_LT_LT;
	v->a[61881] = anon_sym_LT_LT_DASH;
	v->a[61882] = actions(2007);
	v->a[61883] = 2;
	v->a[61884] = anon_sym_LT_AMP_DASH;
	v->a[61885] = anon_sym_GT_AMP_DASH;
	v->a[61886] = actions(750);
	v->a[61887] = 3;
	v->a[61888] = anon_sym_SEMI_SEMI;
	v->a[61889] = anon_sym_AMP;
	v->a[61890] = anon_sym_SEMI;
	v->a[61891] = state(1128);
	v->a[61892] = 3;
	v->a[61893] = sym_file_redirect;
	v->a[61894] = sym_heredoc_redirect;
	v->a[61895] = aux_sym_redirected_statement_repeat1;
	v->a[61896] = actions(2005);
	v->a[61897] = 6;
	v->a[61898] = anon_sym_LT;
	v->a[61899] = anon_sym_GT;
	small_parse_table_3095(v);
}

/* EOF small_parse_table_618.c */
