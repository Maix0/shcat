/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_660.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3300(t_small_parse_table_array *v)
{
	v->a[66000] = anon_sym_AMP_AMP;
	v->a[66001] = anon_sym_PIPE_PIPE;
	v->a[66002] = actions(2063);
	v->a[66003] = 2;
	v->a[66004] = anon_sym_LT_AMP_DASH;
	v->a[66005] = anon_sym_GT_AMP_DASH;
	v->a[66006] = actions(1045);
	v->a[66007] = 3;
	v->a[66008] = anon_sym_SEMI_SEMI;
	v->a[66009] = anon_sym_AMP;
	v->a[66010] = anon_sym_SEMI;
	v->a[66011] = state(1268);
	v->a[66012] = 3;
	v->a[66013] = sym_file_redirect;
	v->a[66014] = sym_heredoc_redirect;
	v->a[66015] = aux_sym_redirected_statement_repeat1;
	v->a[66016] = actions(2061);
	v->a[66017] = 6;
	v->a[66018] = anon_sym_LT;
	v->a[66019] = anon_sym_GT;
	small_parse_table_3301(v);
}

void	small_parse_table_3301(t_small_parse_table_array *v)
{
	v->a[66020] = anon_sym_GT_GT;
	v->a[66021] = anon_sym_LT_AMP;
	v->a[66022] = anon_sym_GT_AMP;
	v->a[66023] = anon_sym_GT_PIPE;
	v->a[66024] = 5;
	v->a[66025] = actions(3);
	v->a[66026] = 1;
	v->a[66027] = sym_comment;
	v->a[66028] = actions(2191);
	v->a[66029] = 1;
	v->a[66030] = sym_variable_name;
	v->a[66031] = actions(2148);
	v->a[66032] = 2;
	v->a[66033] = sym_file_descriptor;
	v->a[66034] = aux_sym_heredoc_redirect_token1;
	v->a[66035] = state(1158);
	v->a[66036] = 2;
	v->a[66037] = sym_variable_assignment;
	v->a[66038] = aux_sym__variable_assignments_repeat1;
	v->a[66039] = actions(2150);
	small_parse_table_3302(v);
}

void	small_parse_table_3302(t_small_parse_table_array *v)
{
	v->a[66040] = 17;
	v->a[66041] = anon_sym_esac;
	v->a[66042] = anon_sym_PIPE;
	v->a[66043] = anon_sym_SEMI_SEMI;
	v->a[66044] = anon_sym_AMP_AMP;
	v->a[66045] = anon_sym_PIPE_PIPE;
	v->a[66046] = anon_sym_LT;
	v->a[66047] = anon_sym_GT;
	v->a[66048] = anon_sym_GT_GT;
	v->a[66049] = anon_sym_LT_AMP;
	v->a[66050] = anon_sym_GT_AMP;
	v->a[66051] = anon_sym_GT_PIPE;
	v->a[66052] = anon_sym_LT_AMP_DASH;
	v->a[66053] = anon_sym_GT_AMP_DASH;
	v->a[66054] = anon_sym_LT_LT;
	v->a[66055] = anon_sym_LT_LT_DASH;
	v->a[66056] = anon_sym_AMP;
	v->a[66057] = anon_sym_SEMI;
	v->a[66058] = 16;
	v->a[66059] = actions(3);
	small_parse_table_3303(v);
}

void	small_parse_table_3303(t_small_parse_table_array *v)
{
	v->a[66060] = 1;
	v->a[66061] = sym_comment;
	v->a[66062] = actions(1774);
	v->a[66063] = 1;
	v->a[66064] = anon_sym_LPAREN;
	v->a[66065] = actions(1778);
	v->a[66066] = 1;
	v->a[66067] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66068] = actions(1780);
	v->a[66069] = 1;
	v->a[66070] = anon_sym_DOLLAR;
	v->a[66071] = actions(1782);
	v->a[66072] = 1;
	v->a[66073] = anon_sym_DQUOTE;
	v->a[66074] = actions(1784);
	v->a[66075] = 1;
	v->a[66076] = anon_sym_DOLLAR_LBRACE;
	v->a[66077] = actions(1786);
	v->a[66078] = 1;
	v->a[66079] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3304(v);
}

void	small_parse_table_3304(t_small_parse_table_array *v)
{
	v->a[66080] = actions(1788);
	v->a[66081] = 1;
	v->a[66082] = anon_sym_BQUOTE;
	v->a[66083] = actions(1790);
	v->a[66084] = 1;
	v->a[66085] = sym_extglob_pattern;
	v->a[66086] = actions(2193);
	v->a[66087] = 1;
	v->a[66088] = anon_sym_esac;
	v->a[66089] = state(1241);
	v->a[66090] = 1;
	v->a[66091] = aux_sym_case_statement_repeat1;
	v->a[66092] = state(1920);
	v->a[66093] = 1;
	v->a[66094] = sym_case_item;
	v->a[66095] = state(2310);
	v->a[66096] = 1;
	v->a[66097] = sym__case_item_last;
	v->a[66098] = state(2096);
	v->a[66099] = 2;
	small_parse_table_3305(v);
}

/* EOF small_parse_table_660.c */
