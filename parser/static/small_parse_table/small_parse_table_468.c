/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_468.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2340(t_small_parse_table_array *v)
{
	v->a[46800] = state(1017);
	v->a[46801] = 2;
	v->a[46802] = sym_file_redirect;
	v->a[46803] = aux_sym_redirected_statement_repeat2;
	v->a[46804] = actions(2116);
	v->a[46805] = 3;
	v->a[46806] = anon_sym_LT;
	v->a[46807] = anon_sym_GT;
	v->a[46808] = anon_sym_GT_GT;
	v->a[46809] = actions(2080);
	v->a[46810] = 7;
	v->a[46811] = anon_sym_PIPE;
	v->a[46812] = anon_sym_RPAREN;
	v->a[46813] = anon_sym_SEMI_SEMI;
	v->a[46814] = anon_sym_AMP_AMP;
	v->a[46815] = anon_sym_PIPE_PIPE;
	v->a[46816] = anon_sym_LT_LT;
	v->a[46817] = anon_sym_SEMI;
	v->a[46818] = 3;
	v->a[46819] = actions(3);
	small_parse_table_2341(v);
}

void	small_parse_table_2341(t_small_parse_table_array *v)
{
	v->a[46820] = 1;
	v->a[46821] = sym_comment;
	v->a[46822] = actions(2119);
	v->a[46823] = 2;
	v->a[46824] = ts_builtin_sym_end;
	v->a[46825] = aux_sym_heredoc_redirect_token1;
	v->a[46826] = actions(2121);
	v->a[46827] = 11;
	v->a[46828] = anon_sym_PIPE;
	v->a[46829] = anon_sym_RPAREN;
	v->a[46830] = anon_sym_SEMI_SEMI;
	v->a[46831] = anon_sym_AMP_AMP;
	v->a[46832] = anon_sym_PIPE_PIPE;
	v->a[46833] = anon_sym_LT;
	v->a[46834] = anon_sym_GT;
	v->a[46835] = anon_sym_GT_GT;
	v->a[46836] = anon_sym_LT_LT;
	v->a[46837] = anon_sym_BQUOTE;
	v->a[46838] = anon_sym_SEMI;
	v->a[46839] = 5;
	small_parse_table_2342(v);
}

void	small_parse_table_2342(t_small_parse_table_array *v)
{
	v->a[46840] = actions(3);
	v->a[46841] = 1;
	v->a[46842] = sym_comment;
	v->a[46843] = actions(2065);
	v->a[46844] = 1;
	v->a[46845] = aux_sym_heredoc_redirect_token1;
	v->a[46846] = state(1017);
	v->a[46847] = 2;
	v->a[46848] = sym_file_redirect;
	v->a[46849] = aux_sym_redirected_statement_repeat2;
	v->a[46850] = actions(1868);
	v->a[46851] = 3;
	v->a[46852] = anon_sym_LT;
	v->a[46853] = anon_sym_GT;
	v->a[46854] = anon_sym_GT_GT;
	v->a[46855] = actions(2063);
	v->a[46856] = 7;
	v->a[46857] = anon_sym_PIPE;
	v->a[46858] = anon_sym_RPAREN;
	v->a[46859] = anon_sym_SEMI_SEMI;
	small_parse_table_2343(v);
}

void	small_parse_table_2343(t_small_parse_table_array *v)
{
	v->a[46860] = anon_sym_AMP_AMP;
	v->a[46861] = anon_sym_PIPE_PIPE;
	v->a[46862] = anon_sym_LT_LT;
	v->a[46863] = anon_sym_SEMI;
	v->a[46864] = 3;
	v->a[46865] = actions(3);
	v->a[46866] = 1;
	v->a[46867] = sym_comment;
	v->a[46868] = actions(2123);
	v->a[46869] = 2;
	v->a[46870] = ts_builtin_sym_end;
	v->a[46871] = aux_sym_heredoc_redirect_token1;
	v->a[46872] = actions(2125);
	v->a[46873] = 11;
	v->a[46874] = anon_sym_PIPE;
	v->a[46875] = anon_sym_RPAREN;
	v->a[46876] = anon_sym_SEMI_SEMI;
	v->a[46877] = anon_sym_AMP_AMP;
	v->a[46878] = anon_sym_PIPE_PIPE;
	v->a[46879] = anon_sym_LT;
	small_parse_table_2344(v);
}

void	small_parse_table_2344(t_small_parse_table_array *v)
{
	v->a[46880] = anon_sym_GT;
	v->a[46881] = anon_sym_GT_GT;
	v->a[46882] = anon_sym_LT_LT;
	v->a[46883] = anon_sym_BQUOTE;
	v->a[46884] = anon_sym_SEMI;
	v->a[46885] = 6;
	v->a[46886] = actions(3);
	v->a[46887] = 1;
	v->a[46888] = sym_comment;
	v->a[46889] = actions(2013);
	v->a[46890] = 1;
	v->a[46891] = sym_string_content;
	v->a[46892] = actions(2017);
	v->a[46893] = 1;
	v->a[46894] = sym_variable_name;
	v->a[46895] = actions(2127);
	v->a[46896] = 1;
	v->a[46897] = anon_sym_DQUOTE;
	v->a[46898] = actions(2015);
	v->a[46899] = 2;
	small_parse_table_2345(v);
}

/* EOF small_parse_table_468.c */
