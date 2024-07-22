/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_578.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2890(t_small_parse_table_array *v)
{
	v->a[57800] = anon_sym_GT_AMP;
	v->a[57801] = anon_sym_GT_PIPE;
	v->a[57802] = anon_sym_LT_GT;
	v->a[57803] = 7;
	v->a[57804] = actions(3);
	v->a[57805] = 1;
	v->a[57806] = sym_comment;
	v->a[57807] = actions(1933);
	v->a[57808] = 1;
	v->a[57809] = sym_file_descriptor;
	v->a[57810] = actions(1951);
	v->a[57811] = 1;
	v->a[57812] = aux_sym_heredoc_redirect_token1;
	v->a[57813] = actions(790);
	v->a[57814] = 2;
	v->a[57815] = anon_sym_LT_LT;
	v->a[57816] = anon_sym_LT_LT_DASH;
	v->a[57817] = state(1041);
	v->a[57818] = 3;
	v->a[57819] = sym_file_redirect;
	small_parse_table_2891(v);
}

void	small_parse_table_2891(t_small_parse_table_array *v)
{
	v->a[57820] = sym_heredoc_redirect;
	v->a[57821] = aux_sym_redirected_statement_repeat1;
	v->a[57822] = actions(1949);
	v->a[57823] = 6;
	v->a[57824] = anon_sym_PIPE;
	v->a[57825] = anon_sym_RPAREN;
	v->a[57826] = anon_sym_SEMI_SEMI;
	v->a[57827] = anon_sym_AMP_AMP;
	v->a[57828] = anon_sym_PIPE_PIPE;
	v->a[57829] = anon_sym_SEMI;
	v->a[57830] = actions(1931);
	v->a[57831] = 7;
	v->a[57832] = anon_sym_LT;
	v->a[57833] = anon_sym_GT;
	v->a[57834] = anon_sym_GT_GT;
	v->a[57835] = anon_sym_LT_AMP;
	v->a[57836] = anon_sym_GT_AMP;
	v->a[57837] = anon_sym_GT_PIPE;
	v->a[57838] = anon_sym_LT_GT;
	v->a[57839] = 5;
	small_parse_table_2892(v);
}

void	small_parse_table_2892(t_small_parse_table_array *v)
{
	v->a[57840] = actions(3);
	v->a[57841] = 1;
	v->a[57842] = sym_comment;
	v->a[57843] = actions(1957);
	v->a[57844] = 1;
	v->a[57845] = sym_variable_name;
	v->a[57846] = actions(1955);
	v->a[57847] = 2;
	v->a[57848] = sym_file_descriptor;
	v->a[57849] = aux_sym_heredoc_redirect_token1;
	v->a[57850] = state(1035);
	v->a[57851] = 2;
	v->a[57852] = sym_variable_assignment;
	v->a[57853] = aux_sym__variable_assignments_repeat1;
	v->a[57854] = actions(1953);
	v->a[57855] = 15;
	v->a[57856] = anon_sym_esac;
	v->a[57857] = anon_sym_PIPE;
	v->a[57858] = anon_sym_SEMI_SEMI;
	v->a[57859] = anon_sym_AMP_AMP;
	small_parse_table_2893(v);
}

void	small_parse_table_2893(t_small_parse_table_array *v)
{
	v->a[57860] = anon_sym_PIPE_PIPE;
	v->a[57861] = anon_sym_LT;
	v->a[57862] = anon_sym_GT;
	v->a[57863] = anon_sym_GT_GT;
	v->a[57864] = anon_sym_LT_AMP;
	v->a[57865] = anon_sym_GT_AMP;
	v->a[57866] = anon_sym_GT_PIPE;
	v->a[57867] = anon_sym_LT_GT;
	v->a[57868] = anon_sym_LT_LT;
	v->a[57869] = anon_sym_LT_LT_DASH;
	v->a[57870] = anon_sym_SEMI;
	v->a[57871] = 11;
	v->a[57872] = actions(3);
	v->a[57873] = 1;
	v->a[57874] = sym_comment;
	v->a[57875] = actions(782);
	v->a[57876] = 1;
	v->a[57877] = anon_sym_PIPE;
	v->a[57878] = actions(784);
	v->a[57879] = 1;
	small_parse_table_2894(v);
}

void	small_parse_table_2894(t_small_parse_table_array *v)
{
	v->a[57880] = anon_sym_SEMI_SEMI;
	v->a[57881] = actions(786);
	v->a[57882] = 1;
	v->a[57883] = anon_sym_SEMI;
	v->a[57884] = actions(1888);
	v->a[57885] = 1;
	v->a[57886] = aux_sym_heredoc_redirect_token1;
	v->a[57887] = actions(1945);
	v->a[57888] = 1;
	v->a[57889] = sym_file_descriptor;
	v->a[57890] = state(571);
	v->a[57891] = 1;
	v->a[57892] = sym_terminator;
	v->a[57893] = actions(790);
	v->a[57894] = 2;
	v->a[57895] = anon_sym_LT_LT;
	v->a[57896] = anon_sym_LT_LT_DASH;
	v->a[57897] = actions(1028);
	v->a[57898] = 2;
	v->a[57899] = anon_sym_AMP_AMP;
	small_parse_table_2895(v);
}

/* EOF small_parse_table_578.c */
