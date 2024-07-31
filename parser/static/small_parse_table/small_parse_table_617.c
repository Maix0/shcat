/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_617.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3085(t_small_parse_table_array *v)
{
	v->a[61700] = 1;
	v->a[61701] = anon_sym_DOLLAR_LBRACE;
	v->a[61702] = actions(2558);
	v->a[61703] = 1;
	v->a[61704] = anon_sym_DOLLAR_LPAREN;
	v->a[61705] = actions(2560);
	v->a[61706] = 1;
	v->a[61707] = anon_sym_BQUOTE;
	v->a[61708] = actions(2601);
	v->a[61709] = 1;
	v->a[61710] = anon_sym_DOLLAR;
	v->a[61711] = actions(2603);
	v->a[61712] = 1;
	v->a[61713] = anon_sym_DQUOTE;
	v->a[61714] = state(1335);
	v->a[61715] = 1;
	v->a[61716] = aux_sym_string_repeat1;
	v->a[61717] = state(1477);
	v->a[61718] = 4;
	v->a[61719] = sym_arithmetic_expansion;
	small_parse_table_3086(v);
}

void	small_parse_table_3086(t_small_parse_table_array *v)
{
	v->a[61720] = sym_simple_expansion;
	v->a[61721] = sym_expansion;
	v->a[61722] = sym_command_substitution;
	v->a[61723] = 10;
	v->a[61724] = actions(3);
	v->a[61725] = 1;
	v->a[61726] = sym_comment;
	v->a[61727] = actions(2548);
	v->a[61728] = 1;
	v->a[61729] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61730] = actions(2554);
	v->a[61731] = 1;
	v->a[61732] = sym_string_content;
	v->a[61733] = actions(2556);
	v->a[61734] = 1;
	v->a[61735] = anon_sym_DOLLAR_LBRACE;
	v->a[61736] = actions(2558);
	v->a[61737] = 1;
	v->a[61738] = anon_sym_DOLLAR_LPAREN;
	v->a[61739] = actions(2560);
	small_parse_table_3087(v);
}

void	small_parse_table_3087(t_small_parse_table_array *v)
{
	v->a[61740] = 1;
	v->a[61741] = anon_sym_BQUOTE;
	v->a[61742] = actions(2605);
	v->a[61743] = 1;
	v->a[61744] = anon_sym_DOLLAR;
	v->a[61745] = actions(2607);
	v->a[61746] = 1;
	v->a[61747] = anon_sym_DQUOTE;
	v->a[61748] = state(1370);
	v->a[61749] = 1;
	v->a[61750] = aux_sym_string_repeat1;
	v->a[61751] = state(1477);
	v->a[61752] = 4;
	v->a[61753] = sym_arithmetic_expansion;
	v->a[61754] = sym_simple_expansion;
	v->a[61755] = sym_expansion;
	v->a[61756] = sym_command_substitution;
	v->a[61757] = 8;
	v->a[61758] = actions(3);
	v->a[61759] = 1;
	small_parse_table_3088(v);
}

void	small_parse_table_3088(t_small_parse_table_array *v)
{
	v->a[61760] = sym_comment;
	v->a[61761] = actions(2566);
	v->a[61762] = 1;
	v->a[61763] = anon_sym_POUND;
	v->a[61764] = actions(2568);
	v->a[61765] = 1;
	v->a[61766] = aux_sym__simple_variable_name_token1;
	v->a[61767] = actions(2570);
	v->a[61768] = 1;
	v->a[61769] = anon_sym_0;
	v->a[61770] = actions(2572);
	v->a[61771] = 1;
	v->a[61772] = sym_variable_name;
	v->a[61773] = actions(2609);
	v->a[61774] = 1;
	v->a[61775] = anon_sym_RBRACE;
	v->a[61776] = state(1802);
	v->a[61777] = 1;
	v->a[61778] = sym__expansion_body;
	v->a[61779] = actions(2564);
	small_parse_table_3089(v);
}

void	small_parse_table_3089(t_small_parse_table_array *v)
{
	v->a[61780] = 6;
	v->a[61781] = anon_sym_BANG;
	v->a[61782] = anon_sym_DASH;
	v->a[61783] = anon_sym_STAR;
	v->a[61784] = anon_sym_QMARK;
	v->a[61785] = anon_sym_DOLLAR;
	v->a[61786] = anon_sym_AT;
	v->a[61787] = 4;
	v->a[61788] = actions(3);
	v->a[61789] = 1;
	v->a[61790] = sym_comment;
	v->a[61791] = actions(2613);
	v->a[61792] = 1;
	v->a[61793] = anon_sym_esac;
	v->a[61794] = actions(2615);
	v->a[61795] = 1;
	v->a[61796] = sym_extglob_pattern;
	v->a[61797] = actions(2611);
	v->a[61798] = 10;
	v->a[61799] = anon_sym_LPAREN;
	small_parse_table_3090(v);
}

/* EOF small_parse_table_617.c */
