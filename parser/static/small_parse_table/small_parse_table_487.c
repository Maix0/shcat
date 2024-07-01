/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_487.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2435(t_small_parse_table_array *v)
{
	v->a[48700] = sym_comment;
	v->a[48701] = actions(1575);
	v->a[48702] = 2;
	v->a[48703] = anon_sym_RPAREN;
	v->a[48704] = anon_sym_SEMI_SEMI;
	v->a[48705] = actions(1577);
	v->a[48706] = 2;
	v->a[48707] = sym_file_descriptor;
	v->a[48708] = sym_variable_name;
	v->a[48709] = actions(1573);
	v->a[48710] = 25;
	v->a[48711] = anon_sym_for;
	v->a[48712] = anon_sym_while;
	v->a[48713] = anon_sym_until;
	v->a[48714] = anon_sym_if;
	v->a[48715] = anon_sym_case;
	v->a[48716] = anon_sym_LPAREN;
	v->a[48717] = anon_sym_LBRACE;
	v->a[48718] = anon_sym_BANG;
	v->a[48719] = anon_sym_LT;
	small_parse_table_2436(v);
}

void	small_parse_table_2436(t_small_parse_table_array *v)
{
	v->a[48720] = anon_sym_GT;
	v->a[48721] = anon_sym_GT_GT;
	v->a[48722] = anon_sym_LT_AMP;
	v->a[48723] = anon_sym_GT_AMP;
	v->a[48724] = anon_sym_GT_PIPE;
	v->a[48725] = anon_sym_LT_AMP_DASH;
	v->a[48726] = anon_sym_GT_AMP_DASH;
	v->a[48727] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48728] = anon_sym_DOLLAR;
	v->a[48729] = anon_sym_DQUOTE;
	v->a[48730] = sym_raw_string;
	v->a[48731] = sym_number;
	v->a[48732] = anon_sym_DOLLAR_LBRACE;
	v->a[48733] = anon_sym_DOLLAR_LPAREN;
	v->a[48734] = anon_sym_BQUOTE;
	v->a[48735] = sym_word;
	v->a[48736] = 7;
	v->a[48737] = actions(3);
	v->a[48738] = 1;
	v->a[48739] = sym_comment;
	small_parse_table_2437(v);
}

void	small_parse_table_2437(t_small_parse_table_array *v)
{
	v->a[48740] = actions(1530);
	v->a[48741] = 1;
	v->a[48742] = sym_file_descriptor;
	v->a[48743] = actions(1533);
	v->a[48744] = 1;
	v->a[48745] = sym_variable_name;
	v->a[48746] = actions(1683);
	v->a[48747] = 1;
	v->a[48748] = anon_sym_RPAREN;
	v->a[48749] = actions(1527);
	v->a[48750] = 8;
	v->a[48751] = anon_sym_LT;
	v->a[48752] = anon_sym_GT;
	v->a[48753] = anon_sym_GT_GT;
	v->a[48754] = anon_sym_LT_AMP;
	v->a[48755] = anon_sym_GT_AMP;
	v->a[48756] = anon_sym_GT_PIPE;
	v->a[48757] = anon_sym_LT_AMP_DASH;
	v->a[48758] = anon_sym_GT_AMP_DASH;
	v->a[48759] = actions(1520);
	small_parse_table_2438(v);
}

void	small_parse_table_2438(t_small_parse_table_array *v)
{
	v->a[48760] = 9;
	v->a[48761] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48762] = anon_sym_DOLLAR;
	v->a[48763] = anon_sym_DQUOTE;
	v->a[48764] = sym_raw_string;
	v->a[48765] = sym_number;
	v->a[48766] = anon_sym_DOLLAR_LBRACE;
	v->a[48767] = anon_sym_DOLLAR_LPAREN;
	v->a[48768] = anon_sym_BQUOTE;
	v->a[48769] = sym_word;
	v->a[48770] = actions(1522);
	v->a[48771] = 9;
	v->a[48772] = anon_sym_PIPE;
	v->a[48773] = anon_sym_SEMI_SEMI;
	v->a[48774] = anon_sym_AMP_AMP;
	v->a[48775] = anon_sym_PIPE_PIPE;
	v->a[48776] = anon_sym_LT_LT;
	v->a[48777] = anon_sym_LT_LT_DASH;
	v->a[48778] = aux_sym_heredoc_redirect_token1;
	v->a[48779] = anon_sym_AMP;
	small_parse_table_2439(v);
}

void	small_parse_table_2439(t_small_parse_table_array *v)
{
	v->a[48780] = anon_sym_SEMI;
	v->a[48781] = 4;
	v->a[48782] = actions(3);
	v->a[48783] = 1;
	v->a[48784] = sym_comment;
	v->a[48785] = actions(1686);
	v->a[48786] = 1;
	v->a[48787] = ts_builtin_sym_end;
	v->a[48788] = actions(1577);
	v->a[48789] = 2;
	v->a[48790] = sym_file_descriptor;
	v->a[48791] = sym_variable_name;
	v->a[48792] = actions(1573);
	v->a[48793] = 25;
	v->a[48794] = anon_sym_for;
	v->a[48795] = anon_sym_while;
	v->a[48796] = anon_sym_until;
	v->a[48797] = anon_sym_if;
	v->a[48798] = anon_sym_case;
	v->a[48799] = anon_sym_LPAREN;
	small_parse_table_2440(v);
}

/* EOF small_parse_table_487.c */
