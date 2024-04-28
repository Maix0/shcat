/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3150.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15750(t_small_parse_table_array *v)
{
	v->a[315000] = 1;
	v->a[315001] = sym_comment;
	v->a[315002] = actions(165);
	v->a[315003] = 1;
	v->a[315004] = anon_sym_LBRACE;
	v->a[315005] = actions(14744);
	v->a[315006] = 1;
	v->a[315007] = anon_sym_do;
	v->a[315008] = state(5687);
	v->a[315009] = 1;
	v->a[315010] = sym_do_group;
	v->a[315011] = state(5689);
	v->a[315012] = 1;
	v->a[315013] = sym_compound_statement;
	v->a[315014] = 2;
	v->a[315015] = actions(71);
	v->a[315016] = 1;
	v->a[315017] = sym_comment;
	v->a[315018] = actions(1354);
	v->a[315019] = 4;
	small_parse_table_15751(v);
}

void	small_parse_table_15751(t_small_parse_table_array *v)
{
	v->a[315020] = sym__concat;
	v->a[315021] = anon_sym_PIPE;
	v->a[315022] = anon_sym_RPAREN;
	v->a[315023] = aux_sym_concatenation_token1;
	v->a[315024] = 2;
	v->a[315025] = actions(71);
	v->a[315026] = 1;
	v->a[315027] = sym_comment;
	v->a[315028] = actions(1342);
	v->a[315029] = 4;
	v->a[315030] = sym__concat;
	v->a[315031] = anon_sym_PIPE;
	v->a[315032] = anon_sym_RPAREN;
	v->a[315033] = aux_sym_concatenation_token1;
	v->a[315034] = 5;
	v->a[315035] = actions(71);
	v->a[315036] = 1;
	v->a[315037] = sym_comment;
	v->a[315038] = actions(14839);
	v->a[315039] = 1;
	small_parse_table_15752(v);
}

void	small_parse_table_15752(t_small_parse_table_array *v)
{
	v->a[315040] = anon_sym_esac;
	v->a[315041] = actions(14870);
	v->a[315042] = 1;
	v->a[315043] = anon_sym_SEMI_SEMI;
	v->a[315044] = actions(14872);
	v->a[315045] = 1;
	v->a[315046] = anon_sym_SEMI_AMP;
	v->a[315047] = actions(14874);
	v->a[315048] = 1;
	v->a[315049] = anon_sym_SEMI_SEMI_AMP;
	v->a[315050] = 5;
	v->a[315051] = actions(71);
	v->a[315052] = 1;
	v->a[315053] = sym_comment;
	v->a[315054] = actions(433);
	v->a[315055] = 1;
	v->a[315056] = anon_sym_LBRACE;
	v->a[315057] = actions(14790);
	v->a[315058] = 1;
	v->a[315059] = anon_sym_do;
	small_parse_table_15753(v);
}

void	small_parse_table_15753(t_small_parse_table_array *v)
{
	v->a[315060] = state(5003);
	v->a[315061] = 1;
	v->a[315062] = sym_do_group;
	v->a[315063] = state(5006);
	v->a[315064] = 1;
	v->a[315065] = sym_compound_statement;
	v->a[315066] = 2;
	v->a[315067] = actions(71);
	v->a[315068] = 1;
	v->a[315069] = sym_comment;
	v->a[315070] = actions(1350);
	v->a[315071] = 4;
	v->a[315072] = sym__concat;
	v->a[315073] = anon_sym_PIPE;
	v->a[315074] = anon_sym_RPAREN;
	v->a[315075] = aux_sym_concatenation_token1;
	v->a[315076] = 2;
	v->a[315077] = actions(71);
	v->a[315078] = 1;
	v->a[315079] = sym_comment;
	small_parse_table_15754(v);
}

void	small_parse_table_15754(t_small_parse_table_array *v)
{
	v->a[315080] = actions(1322);
	v->a[315081] = 4;
	v->a[315082] = sym__concat;
	v->a[315083] = anon_sym_SLASH;
	v->a[315084] = aux_sym_concatenation_token1;
	v->a[315085] = anon_sym_RBRACE3;
	v->a[315086] = 2;
	v->a[315087] = actions(71);
	v->a[315088] = 1;
	v->a[315089] = sym_comment;
	v->a[315090] = actions(1342);
	v->a[315091] = 4;
	v->a[315092] = sym__concat;
	v->a[315093] = anon_sym_SLASH;
	v->a[315094] = aux_sym_concatenation_token1;
	v->a[315095] = anon_sym_RBRACE3;
	v->a[315096] = 2;
	v->a[315097] = actions(71);
	v->a[315098] = 1;
	v->a[315099] = sym_comment;
	small_parse_table_15755(v);
}

/* EOF small_parse_table_3150.c */
