/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_498.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2490(t_small_parse_table_array *v)
{
	v->a[49800] = anon_sym_BQUOTE;
	v->a[49801] = sym_word;
	v->a[49802] = 5;
	v->a[49803] = actions(3);
	v->a[49804] = 1;
	v->a[49805] = sym_comment;
	v->a[49806] = actions(1692);
	v->a[49807] = 1;
	v->a[49808] = aux_sym_heredoc_redirect_token1;
	v->a[49809] = actions(1710);
	v->a[49810] = 1;
	v->a[49811] = sym_variable_name;
	v->a[49812] = state(954);
	v->a[49813] = 2;
	v->a[49814] = sym_variable_assignment;
	v->a[49815] = aux_sym__variable_assignments_repeat1;
	v->a[49816] = actions(1694);
	v->a[49817] = 15;
	v->a[49818] = anon_sym_esac;
	v->a[49819] = anon_sym_PIPE;
	small_parse_table_2491(v);
}

void	small_parse_table_2491(t_small_parse_table_array *v)
{
	v->a[49820] = anon_sym_SEMI_SEMI;
	v->a[49821] = anon_sym_AMP_AMP;
	v->a[49822] = anon_sym_PIPE_PIPE;
	v->a[49823] = anon_sym_LT;
	v->a[49824] = anon_sym_GT;
	v->a[49825] = anon_sym_GT_GT;
	v->a[49826] = anon_sym_LT_AMP;
	v->a[49827] = anon_sym_GT_AMP;
	v->a[49828] = anon_sym_GT_PIPE;
	v->a[49829] = anon_sym_LT_GT;
	v->a[49830] = anon_sym_LT_LT;
	v->a[49831] = anon_sym_LT_LT_DASH;
	v->a[49832] = anon_sym_SEMI;
	v->a[49833] = 4;
	v->a[49834] = actions(3);
	v->a[49835] = 1;
	v->a[49836] = sym_comment;
	v->a[49837] = actions(942);
	v->a[49838] = 1;
	v->a[49839] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2492(v);
}

void	small_parse_table_2492(t_small_parse_table_array *v)
{
	v->a[49840] = state(918);
	v->a[49841] = 3;
	v->a[49842] = sym_file_redirect;
	v->a[49843] = sym_heredoc_redirect;
	v->a[49844] = aux_sym_redirected_statement_repeat1;
	v->a[49845] = actions(916);
	v->a[49846] = 15;
	v->a[49847] = anon_sym_PIPE;
	v->a[49848] = anon_sym_RPAREN;
	v->a[49849] = anon_sym_SEMI_SEMI;
	v->a[49850] = anon_sym_AMP_AMP;
	v->a[49851] = anon_sym_PIPE_PIPE;
	v->a[49852] = anon_sym_LT;
	v->a[49853] = anon_sym_GT;
	v->a[49854] = anon_sym_GT_GT;
	v->a[49855] = anon_sym_LT_AMP;
	v->a[49856] = anon_sym_GT_AMP;
	v->a[49857] = anon_sym_GT_PIPE;
	v->a[49858] = anon_sym_LT_GT;
	v->a[49859] = anon_sym_LT_LT;
	small_parse_table_2493(v);
}

void	small_parse_table_2493(t_small_parse_table_array *v)
{
	v->a[49860] = anon_sym_LT_LT_DASH;
	v->a[49861] = anon_sym_SEMI;
	v->a[49862] = 6;
	v->a[49863] = actions(3);
	v->a[49864] = 1;
	v->a[49865] = sym_comment;
	v->a[49866] = actions(1690);
	v->a[49867] = 1;
	v->a[49868] = aux_sym_heredoc_redirect_token1;
	v->a[49869] = actions(750);
	v->a[49870] = 2;
	v->a[49871] = anon_sym_LT_LT;
	v->a[49872] = anon_sym_LT_LT_DASH;
	v->a[49873] = state(957);
	v->a[49874] = 3;
	v->a[49875] = sym_file_redirect;
	v->a[49876] = sym_heredoc_redirect;
	v->a[49877] = aux_sym_redirected_statement_repeat1;
	v->a[49878] = actions(1688);
	v->a[49879] = 6;
	small_parse_table_2494(v);
}

void	small_parse_table_2494(t_small_parse_table_array *v)
{
	v->a[49880] = anon_sym_esac;
	v->a[49881] = anon_sym_PIPE;
	v->a[49882] = anon_sym_SEMI_SEMI;
	v->a[49883] = anon_sym_AMP_AMP;
	v->a[49884] = anon_sym_PIPE_PIPE;
	v->a[49885] = anon_sym_SEMI;
	v->a[49886] = actions(1593);
	v->a[49887] = 7;
	v->a[49888] = anon_sym_LT;
	v->a[49889] = anon_sym_GT;
	v->a[49890] = anon_sym_GT_GT;
	v->a[49891] = anon_sym_LT_AMP;
	v->a[49892] = anon_sym_GT_AMP;
	v->a[49893] = anon_sym_GT_PIPE;
	v->a[49894] = anon_sym_LT_GT;
	v->a[49895] = 3;
	v->a[49896] = actions(3);
	v->a[49897] = 1;
	v->a[49898] = sym_comment;
	v->a[49899] = actions(1011);
	small_parse_table_2495(v);
}

/* EOF small_parse_table_498.c */
