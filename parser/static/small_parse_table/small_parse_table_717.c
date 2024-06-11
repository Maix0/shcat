/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_717.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3585(t_small_parse_table_array *v)
{
	v->a[71700] = actions(2135);
	v->a[71701] = 1;
	v->a[71702] = aux_sym_heredoc_redirect_token1;
	v->a[71703] = actions(2535);
	v->a[71704] = 1;
	v->a[71705] = sym_file_descriptor;
	v->a[71706] = actions(2529);
	v->a[71707] = 2;
	v->a[71708] = anon_sym_LT_AMP_DASH;
	v->a[71709] = anon_sym_GT_AMP_DASH;
	v->a[71710] = actions(2532);
	v->a[71711] = 2;
	v->a[71712] = anon_sym_LT_LT;
	v->a[71713] = anon_sym_LT_LT_DASH;
	v->a[71714] = state(1273);
	v->a[71715] = 3;
	v->a[71716] = sym_file_redirect;
	v->a[71717] = sym_heredoc_redirect;
	v->a[71718] = aux_sym_redirected_statement_repeat1;
	v->a[71719] = actions(2137);
	small_parse_table_3586(v);
}

void	small_parse_table_3586(t_small_parse_table_array *v)
{
	v->a[71720] = 7;
	v->a[71721] = anon_sym_esac;
	v->a[71722] = anon_sym_PIPE;
	v->a[71723] = anon_sym_SEMI_SEMI;
	v->a[71724] = anon_sym_AMP_AMP;
	v->a[71725] = anon_sym_PIPE_PIPE;
	v->a[71726] = anon_sym_AMP;
	v->a[71727] = anon_sym_SEMI;
	v->a[71728] = actions(2526);
	v->a[71729] = 8;
	v->a[71730] = anon_sym_LT;
	v->a[71731] = anon_sym_GT;
	v->a[71732] = anon_sym_GT_GT;
	v->a[71733] = anon_sym_AMP_GT;
	v->a[71734] = anon_sym_AMP_GT_GT;
	v->a[71735] = anon_sym_LT_AMP;
	v->a[71736] = anon_sym_GT_AMP;
	v->a[71737] = anon_sym_GT_PIPE;
	v->a[71738] = 5;
	v->a[71739] = actions(3);
	small_parse_table_3587(v);
}

void	small_parse_table_3587(t_small_parse_table_array *v)
{
	v->a[71740] = 1;
	v->a[71741] = sym_comment;
	v->a[71742] = actions(2538);
	v->a[71743] = 1;
	v->a[71744] = sym_variable_name;
	v->a[71745] = actions(2117);
	v->a[71746] = 2;
	v->a[71747] = sym_file_descriptor;
	v->a[71748] = aux_sym_heredoc_redirect_token1;
	v->a[71749] = state(1274);
	v->a[71750] = 2;
	v->a[71751] = sym_variable_assignment;
	v->a[71752] = aux_sym_variable_assignments_repeat1;
	v->a[71753] = actions(2115);
	v->a[71754] = 19;
	v->a[71755] = anon_sym_esac;
	v->a[71756] = anon_sym_PIPE;
	v->a[71757] = anon_sym_SEMI_SEMI;
	v->a[71758] = anon_sym_AMP_AMP;
	v->a[71759] = anon_sym_PIPE_PIPE;
	small_parse_table_3588(v);
}

void	small_parse_table_3588(t_small_parse_table_array *v)
{
	v->a[71760] = anon_sym_LT;
	v->a[71761] = anon_sym_GT;
	v->a[71762] = anon_sym_GT_GT;
	v->a[71763] = anon_sym_AMP_GT;
	v->a[71764] = anon_sym_AMP_GT_GT;
	v->a[71765] = anon_sym_LT_AMP;
	v->a[71766] = anon_sym_GT_AMP;
	v->a[71767] = anon_sym_GT_PIPE;
	v->a[71768] = anon_sym_LT_AMP_DASH;
	v->a[71769] = anon_sym_GT_AMP_DASH;
	v->a[71770] = anon_sym_LT_LT;
	v->a[71771] = anon_sym_LT_LT_DASH;
	v->a[71772] = anon_sym_AMP;
	v->a[71773] = anon_sym_SEMI;
	v->a[71774] = 3;
	v->a[71775] = actions(3);
	v->a[71776] = 1;
	v->a[71777] = sym_comment;
	v->a[71778] = actions(1141);
	v->a[71779] = 4;
	small_parse_table_3589(v);
}

void	small_parse_table_3589(t_small_parse_table_array *v)
{
	v->a[71780] = sym_file_descriptor;
	v->a[71781] = sym__concat;
	v->a[71782] = sym_variable_name;
	v->a[71783] = aux_sym_heredoc_redirect_token1;
	v->a[71784] = actions(1139);
	v->a[71785] = 20;
	v->a[71786] = anon_sym_esac;
	v->a[71787] = anon_sym_PIPE;
	v->a[71788] = anon_sym_SEMI_SEMI;
	v->a[71789] = anon_sym_AMP_AMP;
	v->a[71790] = anon_sym_PIPE_PIPE;
	v->a[71791] = anon_sym_LT;
	v->a[71792] = anon_sym_GT;
	v->a[71793] = anon_sym_GT_GT;
	v->a[71794] = anon_sym_AMP_GT;
	v->a[71795] = anon_sym_AMP_GT_GT;
	v->a[71796] = anon_sym_LT_AMP;
	v->a[71797] = anon_sym_GT_AMP;
	v->a[71798] = anon_sym_GT_PIPE;
	v->a[71799] = anon_sym_LT_AMP_DASH;
	small_parse_table_3590(v);
}

/* EOF small_parse_table_717.c */
