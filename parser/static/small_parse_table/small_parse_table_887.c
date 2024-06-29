/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_887.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4435(t_small_parse_table_array *v)
{
	v->a[88700] = aux_sym__multiline_variable_name_token1;
	v->a[88701] = actions(389);
	v->a[88702] = 9;
	v->a[88703] = anon_sym_BANG;
	v->a[88704] = anon_sym_DASH;
	v->a[88705] = anon_sym_STAR;
	v->a[88706] = anon_sym_QMARK;
	v->a[88707] = anon_sym_DOLLAR;
	v->a[88708] = anon_sym_POUND;
	v->a[88709] = anon_sym_AT;
	v->a[88710] = anon_sym_0;
	v->a[88711] = anon_sym__;
	v->a[88712] = 4;
	v->a[88713] = actions(3);
	v->a[88714] = 1;
	v->a[88715] = sym_comment;
	v->a[88716] = actions(2127);
	v->a[88717] = 1;
	v->a[88718] = sym_variable_name;
	v->a[88719] = actions(2125);
	small_parse_table_4436(v);
}

void	small_parse_table_4436(t_small_parse_table_array *v)
{
	v->a[88720] = 2;
	v->a[88721] = aux_sym__simple_variable_name_token1;
	v->a[88722] = aux_sym__multiline_variable_name_token1;
	v->a[88723] = actions(2123);
	v->a[88724] = 9;
	v->a[88725] = anon_sym_BANG;
	v->a[88726] = anon_sym_DASH;
	v->a[88727] = anon_sym_STAR;
	v->a[88728] = anon_sym_QMARK;
	v->a[88729] = anon_sym_DOLLAR;
	v->a[88730] = anon_sym_POUND;
	v->a[88731] = anon_sym_AT;
	v->a[88732] = anon_sym_0;
	v->a[88733] = anon_sym__;
	v->a[88734] = 10;
	v->a[88735] = actions(3);
	v->a[88736] = 1;
	v->a[88737] = sym_comment;
	v->a[88738] = actions(3414);
	v->a[88739] = 1;
	small_parse_table_4437(v);
}

void	small_parse_table_4437(t_small_parse_table_array *v)
{
	v->a[88740] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88741] = actions(3420);
	v->a[88742] = 1;
	v->a[88743] = sym_string_content;
	v->a[88744] = actions(3422);
	v->a[88745] = 1;
	v->a[88746] = anon_sym_DOLLAR_LBRACE;
	v->a[88747] = actions(3424);
	v->a[88748] = 1;
	v->a[88749] = anon_sym_DOLLAR_LPAREN;
	v->a[88750] = actions(3426);
	v->a[88751] = 1;
	v->a[88752] = anon_sym_BQUOTE;
	v->a[88753] = actions(3444);
	v->a[88754] = 1;
	v->a[88755] = anon_sym_DOLLAR;
	v->a[88756] = actions(3446);
	v->a[88757] = 1;
	v->a[88758] = anon_sym_DQUOTE;
	v->a[88759] = state(1813);
	small_parse_table_4438(v);
}

void	small_parse_table_4438(t_small_parse_table_array *v)
{
	v->a[88760] = 1;
	v->a[88761] = aux_sym_string_repeat1;
	v->a[88762] = state(1963);
	v->a[88763] = 4;
	v->a[88764] = sym_arithmetic_expansion;
	v->a[88765] = sym_simple_expansion;
	v->a[88766] = sym_expansion;
	v->a[88767] = sym_command_substitution;
	v->a[88768] = 4;
	v->a[88769] = actions(3);
	v->a[88770] = 1;
	v->a[88771] = sym_comment;
	v->a[88772] = actions(3450);
	v->a[88773] = 1;
	v->a[88774] = anon_sym_esac;
	v->a[88775] = actions(3452);
	v->a[88776] = 1;
	v->a[88777] = sym_extglob_pattern;
	v->a[88778] = actions(3448);
	v->a[88779] = 10;
	small_parse_table_4439(v);
}

void	small_parse_table_4439(t_small_parse_table_array *v)
{
	v->a[88780] = anon_sym_LPAREN;
	v->a[88781] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88782] = anon_sym_DOLLAR;
	v->a[88783] = anon_sym_DQUOTE;
	v->a[88784] = sym_raw_string;
	v->a[88785] = sym_number;
	v->a[88786] = anon_sym_DOLLAR_LBRACE;
	v->a[88787] = anon_sym_DOLLAR_LPAREN;
	v->a[88788] = anon_sym_BQUOTE;
	v->a[88789] = sym_word;
	v->a[88790] = 10;
	v->a[88791] = actions(3);
	v->a[88792] = 1;
	v->a[88793] = sym_comment;
	v->a[88794] = actions(3414);
	v->a[88795] = 1;
	v->a[88796] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88797] = actions(3420);
	v->a[88798] = 1;
	v->a[88799] = sym_string_content;
	small_parse_table_4440(v);
}

/* EOF small_parse_table_887.c */
