/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_598.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2990(t_small_parse_table_array *v)
{
	v->a[59800] = state(630);
	v->a[59801] = 1;
	v->a[59802] = sym_terminator;
	v->a[59803] = actions(790);
	v->a[59804] = 2;
	v->a[59805] = anon_sym_LT_LT;
	v->a[59806] = anon_sym_LT_LT_DASH;
	v->a[59807] = actions(1028);
	v->a[59808] = 2;
	v->a[59809] = anon_sym_AMP_AMP;
	v->a[59810] = anon_sym_PIPE_PIPE;
	v->a[59811] = state(1194);
	v->a[59812] = 3;
	v->a[59813] = sym_file_redirect;
	v->a[59814] = sym_heredoc_redirect;
	v->a[59815] = aux_sym_redirected_statement_repeat1;
	v->a[59816] = actions(1941);
	v->a[59817] = 7;
	v->a[59818] = anon_sym_LT;
	v->a[59819] = anon_sym_GT;
	small_parse_table_2991(v);
}

void	small_parse_table_2991(t_small_parse_table_array *v)
{
	v->a[59820] = anon_sym_GT_GT;
	v->a[59821] = anon_sym_LT_AMP;
	v->a[59822] = anon_sym_GT_AMP;
	v->a[59823] = anon_sym_GT_PIPE;
	v->a[59824] = anon_sym_LT_GT;
	v->a[59825] = 5;
	v->a[59826] = actions(3);
	v->a[59827] = 1;
	v->a[59828] = sym_comment;
	v->a[59829] = actions(2025);
	v->a[59830] = 1;
	v->a[59831] = sym_variable_name;
	v->a[59832] = actions(1977);
	v->a[59833] = 2;
	v->a[59834] = sym_file_descriptor;
	v->a[59835] = aux_sym_heredoc_redirect_token1;
	v->a[59836] = state(1035);
	v->a[59837] = 2;
	v->a[59838] = sym_variable_assignment;
	v->a[59839] = aux_sym__variable_assignments_repeat1;
	small_parse_table_2992(v);
}

void	small_parse_table_2992(t_small_parse_table_array *v)
{
	v->a[59840] = actions(1979);
	v->a[59841] = 15;
	v->a[59842] = anon_sym_esac;
	v->a[59843] = anon_sym_PIPE;
	v->a[59844] = anon_sym_SEMI_SEMI;
	v->a[59845] = anon_sym_AMP_AMP;
	v->a[59846] = anon_sym_PIPE_PIPE;
	v->a[59847] = anon_sym_LT;
	v->a[59848] = anon_sym_GT;
	v->a[59849] = anon_sym_GT_GT;
	v->a[59850] = anon_sym_LT_AMP;
	v->a[59851] = anon_sym_GT_AMP;
	v->a[59852] = anon_sym_GT_PIPE;
	v->a[59853] = anon_sym_LT_GT;
	v->a[59854] = anon_sym_LT_LT;
	v->a[59855] = anon_sym_LT_LT_DASH;
	v->a[59856] = anon_sym_SEMI;
	v->a[59857] = 7;
	v->a[59858] = actions(3);
	v->a[59859] = 1;
	small_parse_table_2993(v);
}

void	small_parse_table_2993(t_small_parse_table_array *v)
{
	v->a[59860] = sym_comment;
	v->a[59861] = actions(1968);
	v->a[59862] = 1;
	v->a[59863] = aux_sym_heredoc_redirect_token1;
	v->a[59864] = actions(2030);
	v->a[59865] = 1;
	v->a[59866] = sym_file_descriptor;
	v->a[59867] = actions(1965);
	v->a[59868] = 2;
	v->a[59869] = anon_sym_LT_LT;
	v->a[59870] = anon_sym_LT_LT_DASH;
	v->a[59871] = state(1093);
	v->a[59872] = 3;
	v->a[59873] = sym_file_redirect;
	v->a[59874] = sym_heredoc_redirect;
	v->a[59875] = aux_sym_redirected_statement_repeat1;
	v->a[59876] = actions(1960);
	v->a[59877] = 6;
	v->a[59878] = anon_sym_PIPE;
	v->a[59879] = anon_sym_SEMI_SEMI;
	small_parse_table_2994(v);
}

void	small_parse_table_2994(t_small_parse_table_array *v)
{
	v->a[59880] = anon_sym_AMP_AMP;
	v->a[59881] = anon_sym_PIPE_PIPE;
	v->a[59882] = anon_sym_BQUOTE;
	v->a[59883] = anon_sym_SEMI;
	v->a[59884] = actions(2027);
	v->a[59885] = 7;
	v->a[59886] = anon_sym_LT;
	v->a[59887] = anon_sym_GT;
	v->a[59888] = anon_sym_GT_GT;
	v->a[59889] = anon_sym_LT_AMP;
	v->a[59890] = anon_sym_GT_AMP;
	v->a[59891] = anon_sym_GT_PIPE;
	v->a[59892] = anon_sym_LT_GT;
	v->a[59893] = 3;
	v->a[59894] = actions(3);
	v->a[59895] = 1;
	v->a[59896] = sym_comment;
	v->a[59897] = actions(515);
	v->a[59898] = 4;
	v->a[59899] = sym_file_descriptor;
	small_parse_table_2995(v);
}

/* EOF small_parse_table_598.c */
