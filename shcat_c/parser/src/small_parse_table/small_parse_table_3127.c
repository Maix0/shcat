/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3127.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15635(t_small_parse_table_array *v)
{
	v->a[312700] = actions(14564);
	v->a[312701] = 1;
	v->a[312702] = anon_sym_PIPE;
	v->a[312703] = actions(14698);
	v->a[312704] = 1;
	v->a[312705] = anon_sym_RPAREN;
	v->a[312706] = state(6373);
	v->a[312707] = 1;
	v->a[312708] = aux_sym_concatenation_repeat1;
	v->a[312709] = state(6598);
	v->a[312710] = 1;
	v->a[312711] = aux_sym_case_item_repeat1;
	v->a[312712] = actions(14568);
	v->a[312713] = 2;
	v->a[312714] = sym__concat;
	v->a[312715] = aux_sym_concatenation_token1;
	v->a[312716] = 6;
	v->a[312717] = actions(3);
	v->a[312718] = 1;
	v->a[312719] = sym_comment;
	small_parse_table_15636(v);
}

void	small_parse_table_15636(t_small_parse_table_array *v)
{
	v->a[312720] = actions(14500);
	v->a[312721] = 1;
	v->a[312722] = anon_sym_COMMA;
	v->a[312723] = actions(14702);
	v->a[312724] = 1;
	v->a[312725] = aux_sym_heredoc_redirect_token1;
	v->a[312726] = state(4241);
	v->a[312727] = 1;
	v->a[312728] = sym__c_terminator;
	v->a[312729] = state(6319);
	v->a[312730] = 1;
	v->a[312731] = aux_sym__for_body_repeat1;
	v->a[312732] = actions(14700);
	v->a[312733] = 2;
	v->a[312734] = anon_sym_SEMI;
	v->a[312735] = anon_sym_AMP;
	v->a[312736] = 6;
	v->a[312737] = actions(71);
	v->a[312738] = 1;
	v->a[312739] = sym_comment;
	small_parse_table_15637(v);
}

void	small_parse_table_15637(t_small_parse_table_array *v)
{
	v->a[312740] = actions(5126);
	v->a[312741] = 1;
	v->a[312742] = anon_sym_DOLLAR_LBRACE;
	v->a[312743] = actions(5130);
	v->a[312744] = 1;
	v->a[312745] = anon_sym_BQUOTE;
	v->a[312746] = actions(5132);
	v->a[312747] = 1;
	v->a[312748] = anon_sym_DOLLAR_BQUOTE;
	v->a[312749] = actions(14704);
	v->a[312750] = 1;
	v->a[312751] = anon_sym_DOLLAR_LPAREN;
	v->a[312752] = state(2870);
	v->a[312753] = 2;
	v->a[312754] = sym_expansion;
	v->a[312755] = sym_command_substitution;
	v->a[312756] = 6;
	v->a[312757] = actions(71);
	v->a[312758] = 1;
	v->a[312759] = sym_comment;
	small_parse_table_15638(v);
}

void	small_parse_table_15638(t_small_parse_table_array *v)
{
	v->a[312760] = actions(8488);
	v->a[312761] = 1;
	v->a[312762] = anon_sym_DOLLAR_LBRACE;
	v->a[312763] = actions(8492);
	v->a[312764] = 1;
	v->a[312765] = anon_sym_BQUOTE;
	v->a[312766] = actions(8494);
	v->a[312767] = 1;
	v->a[312768] = anon_sym_DOLLAR_BQUOTE;
	v->a[312769] = actions(14706);
	v->a[312770] = 1;
	v->a[312771] = anon_sym_DOLLAR_LPAREN;
	v->a[312772] = state(1683);
	v->a[312773] = 2;
	v->a[312774] = sym_expansion;
	v->a[312775] = sym_command_substitution;
	v->a[312776] = 6;
	v->a[312777] = actions(71);
	v->a[312778] = 1;
	v->a[312779] = sym_comment;
	small_parse_table_15639(v);
}

void	small_parse_table_15639(t_small_parse_table_array *v)
{
	v->a[312780] = actions(14708);
	v->a[312781] = 1;
	v->a[312782] = sym_simple_heredoc_body;
	v->a[312783] = actions(14710);
	v->a[312784] = 1;
	v->a[312785] = sym__heredoc_body_beginning;
	v->a[312786] = state(5099);
	v->a[312787] = 1;
	v->a[312788] = sym__heredoc_body;
	v->a[312789] = state(5100);
	v->a[312790] = 1;
	v->a[312791] = sym__simple_heredoc_body;
	v->a[312792] = state(6796);
	v->a[312793] = 1;
	v->a[312794] = sym_heredoc_body;
	v->a[312795] = 6;
	v->a[312796] = actions(71);
	v->a[312797] = 1;
	v->a[312798] = sym_comment;
	v->a[312799] = actions(14710);
	small_parse_table_15640(v);
}

/* EOF small_parse_table_3127.c */
