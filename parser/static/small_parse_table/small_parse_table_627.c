/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_627.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3135(t_small_parse_table_array *v)
{
	v->a[62700] = sym_raw_string;
	v->a[62701] = sym_number;
	v->a[62702] = anon_sym_DOLLAR_LBRACE;
	v->a[62703] = anon_sym_DOLLAR_LPAREN;
	v->a[62704] = anon_sym_BQUOTE;
	v->a[62705] = sym_word;
	v->a[62706] = 6;
	v->a[62707] = actions(3);
	v->a[62708] = 1;
	v->a[62709] = sym_comment;
	v->a[62710] = actions(2001);
	v->a[62711] = 1;
	v->a[62712] = aux_sym_heredoc_redirect_token1;
	v->a[62713] = actions(2199);
	v->a[62714] = 1;
	v->a[62715] = sym_file_descriptor;
	v->a[62716] = state(1167);
	v->a[62717] = 2;
	v->a[62718] = sym_file_redirect;
	v->a[62719] = aux_sym_redirected_statement_repeat2;
	small_parse_table_3136(v);
}

void	small_parse_table_3136(t_small_parse_table_array *v)
{
	v->a[62720] = actions(2196);
	v->a[62721] = 7;
	v->a[62722] = anon_sym_LT;
	v->a[62723] = anon_sym_GT;
	v->a[62724] = anon_sym_GT_GT;
	v->a[62725] = anon_sym_LT_AMP;
	v->a[62726] = anon_sym_GT_AMP;
	v->a[62727] = anon_sym_GT_PIPE;
	v->a[62728] = anon_sym_LT_GT;
	v->a[62729] = actions(2003);
	v->a[62730] = 9;
	v->a[62731] = anon_sym_PIPE;
	v->a[62732] = anon_sym_SEMI_SEMI;
	v->a[62733] = anon_sym_AMP_AMP;
	v->a[62734] = anon_sym_PIPE_PIPE;
	v->a[62735] = anon_sym_LT_LT;
	v->a[62736] = anon_sym_LT_LT_DASH;
	v->a[62737] = anon_sym_AMP;
	v->a[62738] = anon_sym_BQUOTE;
	v->a[62739] = anon_sym_SEMI;
	small_parse_table_3137(v);
}

void	small_parse_table_3137(t_small_parse_table_array *v)
{
	v->a[62740] = 6;
	v->a[62741] = actions(3);
	v->a[62742] = 1;
	v->a[62743] = sym_comment;
	v->a[62744] = actions(2077);
	v->a[62745] = 1;
	v->a[62746] = sym_file_descriptor;
	v->a[62747] = actions(2111);
	v->a[62748] = 1;
	v->a[62749] = aux_sym_heredoc_redirect_token1;
	v->a[62750] = state(1155);
	v->a[62751] = 2;
	v->a[62752] = sym_file_redirect;
	v->a[62753] = aux_sym_redirected_statement_repeat2;
	v->a[62754] = actions(1849);
	v->a[62755] = 7;
	v->a[62756] = anon_sym_LT;
	v->a[62757] = anon_sym_GT;
	v->a[62758] = anon_sym_GT_GT;
	v->a[62759] = anon_sym_LT_AMP;
	small_parse_table_3138(v);
}

void	small_parse_table_3138(t_small_parse_table_array *v)
{
	v->a[62760] = anon_sym_GT_AMP;
	v->a[62761] = anon_sym_GT_PIPE;
	v->a[62762] = anon_sym_LT_GT;
	v->a[62763] = actions(2109);
	v->a[62764] = 9;
	v->a[62765] = anon_sym_esac;
	v->a[62766] = anon_sym_PIPE;
	v->a[62767] = anon_sym_SEMI_SEMI;
	v->a[62768] = anon_sym_AMP_AMP;
	v->a[62769] = anon_sym_PIPE_PIPE;
	v->a[62770] = anon_sym_LT_LT;
	v->a[62771] = anon_sym_LT_LT_DASH;
	v->a[62772] = anon_sym_AMP;
	v->a[62773] = anon_sym_SEMI;
	v->a[62774] = 3;
	v->a[62775] = actions(3);
	v->a[62776] = 1;
	v->a[62777] = sym_comment;
	v->a[62778] = actions(2202);
	v->a[62779] = 3;
	small_parse_table_3139(v);
}

void	small_parse_table_3139(t_small_parse_table_array *v)
{
	v->a[62780] = sym_file_descriptor;
	v->a[62781] = ts_builtin_sym_end;
	v->a[62782] = aux_sym_heredoc_redirect_token1;
	v->a[62783] = actions(2204);
	v->a[62784] = 17;
	v->a[62785] = anon_sym_PIPE;
	v->a[62786] = anon_sym_RPAREN;
	v->a[62787] = anon_sym_SEMI_SEMI;
	v->a[62788] = anon_sym_AMP_AMP;
	v->a[62789] = anon_sym_PIPE_PIPE;
	v->a[62790] = anon_sym_LT;
	v->a[62791] = anon_sym_GT;
	v->a[62792] = anon_sym_GT_GT;
	v->a[62793] = anon_sym_LT_AMP;
	v->a[62794] = anon_sym_GT_AMP;
	v->a[62795] = anon_sym_GT_PIPE;
	v->a[62796] = anon_sym_LT_GT;
	v->a[62797] = anon_sym_LT_LT;
	v->a[62798] = anon_sym_LT_LT_DASH;
	v->a[62799] = anon_sym_AMP;
	small_parse_table_3140(v);
}

/* EOF small_parse_table_627.c */
